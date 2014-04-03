#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Calculator{    
    
    public:
        Calculator();
        ~Calculator();
        string input;
        string stringcreator();
        string parse(string *n);
        string decimal();
};

#endif //_CALCULATOR_H_