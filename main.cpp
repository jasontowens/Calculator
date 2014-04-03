#include "Numbers.h"
#include "Calculator.h"


using namespace std;
int main(){
    Calculator * calc = new Calculator();
    string initialInput;
    cin>>initialInput;
    calc->parse(&initialInput);
    //delete calc;
    return 0;
}