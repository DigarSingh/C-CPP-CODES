#include <iostream>
using namespace std;
int main(){

     float num1,num2;
     char op;
     cout<<"Enter first numbers: ";
     cin>>num1;
     cout<<"Enter second numbers: ";
     cin>>num2;
     cout<<"Enter the operator: ";
     cin>>op;

     switch(op){
          case '+':
               cout<<"Addition of two numbers is: "<<num1+num2<<endl;
               break;
          case '-':
               cout<<"subtraction of two numbers is: "<<num1-num2<<endl;
               break;
          case '*':
               cout<<"Multiplication of two numbers is: "<<num1*num2<<endl;
               break;
          case '/':
               cout<<"Division of two numbers is: "<<num1/num2<<endl;
               break;
          default:
               cout<<"Invalid operator";
               break;
     }
     return 0;
}