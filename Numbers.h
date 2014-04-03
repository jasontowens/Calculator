#ifndef _H_NUMBERS_111_
#define _H_NUMBERS_111_
#include <cstring>
#include <iostream>

using namespace std;

template <class T1, class T2>
class Numbers{
    Numbers();
    ~Numbers();
    public:
        int coefficient;
        int power;
        virtual string add(T1 &num1, T2 &num2)=0;
        virtual string subtract(T1 &num1, T2 &num2)=0;
        virtual string factor(T1 &num1, T2 &num2)=0;
        virtual string multiply(T1 &num1, T2 &num2)=0;
        virtual string decimal(T1 &num1, T2 &num2)=0;
        
};

#endif //_H_NUMBERS_111_