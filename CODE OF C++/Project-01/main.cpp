#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
     srand(time(0)); //Seed random number generator 
     
     int random = (rand() % 100)+1; //Generate random number between 0-100
     //cout<<"Random numbers: "<<random<<endl;

     int Guess = 0;
     int no_of_guessed = 0;
     
     do{
          cout<<"Guess the number: ";
          cin>>Guess;
          if(random == Guess){
          cout<<"\nCorrect,you Guess it Right.\n";
     }
     else if (random > Guess){
          cout<<"\nGuess Higher number please\n";
     }
     else if (random < Guess){
          cout<<"\nGuess Lower number please\n";
     }
          no_of_guessed++;
     }while (Guess != random);
     cout<<"You Guessed the number in: "<<no_of_guessed<<endl;
     return 0;
}