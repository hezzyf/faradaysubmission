#include <stdio.h>

int main(){
    float balance,withraw;
    printf("Enter your account balance: ");//prompts the user to enter balance
    scanf("%f" ,&balance);//stores user input
    
    while (balance>0){
      printf("\nEnter amount to withraw: ");
      scanf("%f",&withraw);
      
      balance=(balance-withraw);
       printf("Remaining balance:%.f\n",balance);
       
       if (balance<=0){
           printf("insufficient funds.\n");
       }
    }
    
    return 0;
    }