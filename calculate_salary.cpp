#include <iostream>
using namespace std;
int main(){
    
    // BP= basic pay, HRA= house rent allowance, DA= dearness allowance, TA= travelling allowance, PF= provident fund
    float bp,hra,da,ta,pf,ts,ys;
    cout<<"enter basic pay : ";
    cin>>bp;

    hra= bp*10/100;
    da= bp*10/100;    
    ta= bp*10/100;
    pf= bp*10/100;

    ts= bp+hra+da+ta-(pf);
    cout<<"total monthly salary is : "<<ts<<endl;
    
    ys= ts*12;
    cout<<"total yearly salary is : "<<ys<<endl;


}