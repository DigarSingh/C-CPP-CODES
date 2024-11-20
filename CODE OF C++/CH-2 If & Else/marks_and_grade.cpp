#include <iostream>
using namespace std;
int main (){
     float sub1,sub2,sub3,sub4,sub5,marks,percentage;
     cout<<"Enter marks of 5 subjects: ";
     cin>>sub1>>sub2>>sub3>>sub4>>sub5;

     marks=sub1+sub2+sub3+sub4+sub5;
     percentage=(marks/500)*100;

     cout<<"Total Marks: "<<marks<<endl;
     cout<<"Percentage: "<<percentage<<endl;

     if(percentage>=90){
          cout<<"Grade A";
     }
     else{
          if(percentage>=80){
          cout<<"Grade B";
          }
          else{
               if(percentage>=70){
                    cout<<"Grade C";
               }
               else{
                    if(percentage>=60){
                         cout<<"Grade D";
                    }
                    else{
                         if(percentage>=40){
                              cout<<"Grade E";
                         }
                         else{
                              cout<<"Grade F";
                         }
                    }
               }
          }
     }
     return 0;
}