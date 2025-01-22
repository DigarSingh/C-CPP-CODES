#include <iostream>
using namespace std;
int main(){
     int arr[7];
     cout<<"Enter 6 numbers: ";
     for(int i=0;i<6;i++){ // input from user
           cin >> arr[i];
     }
     cout<<"Your array: ";
     for(int i=0;i<6;i++){ // output to user
           cout << arr[i] << ",";
     }
     return 0;
}
