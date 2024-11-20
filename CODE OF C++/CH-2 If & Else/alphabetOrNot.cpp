#include <iostream>
using namespace std;
int main () {
     char ch;
     cout << "Enter a character: ";
     cin >> ch;

     int ascii = (int)ch;
     if(ascii>=65 && ascii<=90){
          cout << "The character is an uppercase alphabet." << endl;
     } else if(ascii>=97 && ascii<=122){
          cout << "The character is a lowercase alphabet." << endl;
     } else {
          cout << "The character is not an alphabet." << endl;
     }
     return 0;
}