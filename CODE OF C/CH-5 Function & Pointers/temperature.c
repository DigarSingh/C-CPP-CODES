#include <stdio.h>

float Fahrenheit(float c){
    return (9.0/5.0) *(c + 32);
}

float Celsius(float f){
    return (5.0/9.0) * (f -32);
}

int main(){
    float c = 35.4,f = 98.6;

    printf("Fahrenheit To Celsius id: %.2f\n",Celsius(f));

    printf("Celsius To Fahrenheit id: %.2f\n",Fahrenheit(c));

    return 0;
}