#include <iostream>
using namespace std;
int main() {
     int n;
     cout<<"Enter the number :";
     cin>>n;

     int marks[n];
     cout << "Enter the marks of students: ";
     for(int i=0;i<=n-1;i++){ //taking input
          cin>>marks[i];
     }
     cout << "Students who scored less than 35 are: ";
     for(int i=0;i<=n-1;i++){ //output 
          if(marks[i]<35)
               cout<<i<<",";
     }
     return 0;
}