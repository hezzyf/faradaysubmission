#include <stdio.h>

int main() {
  int secretNumber, Guessednumber;
  printf("welcome to the number guessing game!\n");
  printf("i have chosen a number between 1 and 20.\n");
  
  while (1){
  printf("Enter your Guessednumber: ");
  scanf("%d", &Guessednumber);
  
  if (Guessednumber > secretNumber) {
      printf("Too high!\n");
     } else if (Guessednumber < secretNumber) {
         printf("Too low!\n"); 
     }  else {
             printf("congrutulations the guessed number is corret.\n");
             break;
         }
      }
    return 0;
}