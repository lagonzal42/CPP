/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:28:14 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/27 18:28:14 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <sys/time.h>

PmergeMe::PmergeMe(void)
{}

PmergeMe::~PmergeMe(void)
{}

const PmergeMe& PmergeMe::operator=(const PmergeMe& p)
{
	return (p);
}

PmergeMe::PmergeMe(const PmergeMe&)
{}

void	PmergeMe::sortV(void)
{
	size_t size = myV.size();
	std::vector<std::vector<int> > pairs;
	size_t i = 0;

	while (i < size)
	{
		size_t j = 0;
		std::vector<int> pair;
		while ( j + i < size && j < 2)
		{
			pair.push_back(myV[i + j]);
			j++;
		}
		pairs.push_back(pair);
		i += j;
	}
	sortPairs(pairs);

	std::vector<int> ordered;

	for (size_t i = 0; i < pairs.size() ; i++)
		ordered.push_back(pairs[i].front());
		
	for (size_t i = 0; i < pairs.size() ; i++)
		ordered.insert(std::lower_bound(ordered.begin(), ordered.end(), pairs[i].back()), pairs[i].back());
	
	this->myV = ordered;
}

void	PmergeMe::sortDQ(void)
{
	size_t size = myDQ.size();
	std::deque<std::deque<int> > pairs;
	size_t i = 0;

	while (i < size)
	{
		size_t j = 0;
		std::deque<int> pair;
		while ( j + i < size && j < 2)
		{
			pair.push_back(myV[i + j]);
			j++;
		}
		pairs.push_back(pair);
		i += j;
	}
	sortPairs(pairs);

	std::deque<int> ordered;

	for (size_t i = 0; i < pairs.size() ; i++)
		ordered.push_back(pairs[i].front());
		
	for (size_t i = 0; i < pairs.size() ; i++)
		ordered.insert(std::lower_bound(ordered.begin(), ordered.end(), pairs[i].back()), pairs[i].back());
	
	this->myDQ = ordered;
}

bool	PmergeMe::parse(char** argv)
{
	int i = 0;

	while (argv[i])
	{
		std::string str = std::string(argv[i]);
		size_t n = str.find_first_not_of("1234567890", 0);
		if (n != std::string::npos)
			return (true);
		i++;
	}
	return (false);
}

void	PmergeMe::sort(char **argv)
{
	struct timeval start, end;
	if (this->parse(argv))
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	
	int i = 0;
	while (argv[i])
	{
		int toAdd = std::atoi(argv[i]);
		myDQ.push_back(toAdd);
		myV.push_back(toAdd);
		i++;
	}
	std::cout << "Before: ";
	for (size_t j = 0; j < myV.size(); j++)
		std::cout << myV[j] << " ";
	std::cout << std::endl;
	gettimeofday(&start, NULL);
	sortV();
	gettimeofday(&end, NULL);

	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	double elapsedV = seconds + microseconds * 1e-6;

	
	gettimeofday(&start, NULL);
	sortDQ();
	gettimeofday(&end, NULL);

	seconds = end.tv_sec - start.tv_sec;
	microseconds = end.tv_usec - start.tv_usec;
	double elapsedDQ = seconds + microseconds*1e-6;	
	
	std::cout << "After: ";
	for (size_t j = 0; j < myV.size(); j++)
		std::cout << myV[j] << " ";
	std::cout << std::endl;

	std::cout << "Time to proccess a range of " << i << " elements with std::vector " << elapsedV << " seconds" << std::endl;
	std::cout << "Time to proccess a range of " << i << " elements with std::deque " << elapsedDQ << " seconds" << std::endl;
}

void	sortPairs(std::vector<std::vector<int> >& pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
	    std::sort(pairs[i].begin(), pairs[i].end());
	
	std::sort(pairs.begin(), pairs.end(), ComparePairsV());
}

void	sortPairs(std::deque<std::deque<int> >& pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
	    std::sort(pairs[i].begin(), pairs[i].end());
	
	std::sort(pairs.begin(), pairs.end(), ComparePairsDQ());
}
