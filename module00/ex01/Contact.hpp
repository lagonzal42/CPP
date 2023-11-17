#ifndef CONTACT_HPP
# define CONTACT_HPP
# ifndef DEBUG
#  define DEBUG 0
# endif

class Contact
{
        private:

        //private atributes
                int x;
                int y;

        public:

        //constructor

        Contact (void);

        //constructor with parameters

        Contact (int pX, int pY);

        //copy constructor

        Contact (const Contact& param);

        //assingment operator
Contact& operator=(const Contact& param);

        //destructor

        ~Contact (void);

        //getters and seters

};
#endif
