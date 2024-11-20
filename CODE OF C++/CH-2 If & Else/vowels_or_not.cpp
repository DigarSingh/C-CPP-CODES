#include <iostream>
using namespace std;
int main () {
     char ch;
     cout << "Enter a character: ";
     cin >> ch;

     int ascii = (int)ch;
     if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
          if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
               cout << "The character is a vowel." << endl;
          } else {
               cout << "The character is a consonant." << endl;
          }
     }
     else {
          cout << "The character is not an alphabet." << endl;
     }
     return 0;
}