#include <iostream>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));
     int player , computer = (rand() % 3)+1;

     /*
     1 --> Rock 
     2 --> Paper
     3 --> Scissor
     */

     cout<<"Choose 1 -> Rock 2 -> Paper 3 -> Scissor: ";
     cin>> player;
     cout<<"Computer Choose: "<<computer<<endl;

     if(player == 1 && computer == 2){
          cout<<"Computer Won!\n";
     }
     else if (player == 1 && computer == 1){
          cout<<"Its Draw!\n";
     }    
     else if (player == 1 && computer == 3){
          cout<<"You Won!\n";
     }
     else if (player == 2 && computer == 1){
          cout<<"You Won!\n";
     } 
     else if (player == 2 && computer == 2){
          cout<<"Its Draw!\n";
     } 
     else if (player == 2 && computer == 3){
          cout<<"Computer Won!\n";
     } 
     else if (player == 3 && computer == 1){
          cout<<"Computer Won!\n";
     } 
     else if (player == 3 && computer == 2){
          cout<<"You Won!\n";
     }
     else if (player == 3 && computer == 3){
          cout<<"Its Draw!\n";
     }  
     else{
          cout<<"something went wrong!,Try Again!!";
     }
}