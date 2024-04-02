#pragma once

#include <vector>
#include <deque>
#include <string>

class PmergeMe
{
	private:
		std::deque<int> myDQ;
		std::vector<int> myV;
		
		PmergeMe(const PmergeMe&);
		const PmergeMe& operator=(const PmergeMe& p);

	public:
		PmergeMe(void);
		~PmergeMe(void);

		void	sortV(void);
		void	sortDQ(void);
		bool	parse(char **argv);
		void	sort(char** argv);
};

struct ComparePairsV {
    bool operator()(const std::vector<int>& a, const std::vector<int>& b) {
        return a.front() < b.front();
    }
};

struct ComparePairsDQ {
    bool operator()(const std::deque<int>& a, const std::deque<int>& b) {
        return a.front() < b.front();
    }
};

void	sortPairs(std::vector<std::vector<int> >& pairs);
void	sortPairs(std::deque<std::deque<int> >& pairs);
