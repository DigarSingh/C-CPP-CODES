#include <iostream>
using namespace std;
void find(int n, int *p1, int *p2){
     *p2 = n%10;
     while(n>10){
          n/=10;
     }
     *p1 = n;
     return;
}
int main(){
     int n, firstDigit, lastDigit;
     cout<<"Enter a number: ";
     cin>>n;
     int *p1 = &firstDigit;
     int *p2 = &lastDigit;
     find(n, p1, p2);
     cout<<firstDigit<<" "<<lastDigit<<endl;
     return 0;
}