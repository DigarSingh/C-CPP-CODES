#include <iostream>
using namespace std;
int main () {
     int n;
     cout << "Enter a number: ";
     cin >> n;

     if(n%5==0 || n%3==0){
          if(n%15!=0){
               cout<<"Number is divisible by 5 and 3 but not by 15";
          }
          else{
               cout<<"Number is divisible by 5,3 and divisible by 15";
          }
     }
     else{
          cout<<"Number is not divisible by 5 and 3";
     }
     return 0;
}