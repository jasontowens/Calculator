#include "Calculator.h"

Calculator::Calculator(){

    

}
Calculator::~Calculator(){
    delete this;
}
string Calculator::parse(string *n){

    for(int i=0; i<(*n).length(); i++){
        
        cout<<(*n).at(i)<<endl;
    }
        return "fox";
}