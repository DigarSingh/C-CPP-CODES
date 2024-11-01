#include<iostream>
using namespace std;

int main() {
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int count =0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"the count of this number is :"<<count;
    return 0;
}