#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# ifndef DEBUG
#  define DEBUG 0
# endif

class Phonebook
{
        private:

        //private atributes
                int x;
                int y;

        public:

        //constructor

        Phonebook (void);

        //constructor with parameters

        Phonebook (int pX, int pY);

        //copy constructor

        Phonebook (const Phonebook& param);

        //assingment operator
Phonebook& operator=(const Phonebook& param);

        //destructor

        ~Phonebook (void);

        //getters and seters

};
#endif
