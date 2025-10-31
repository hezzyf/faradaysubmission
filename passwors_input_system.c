#include <stdio.h>

int main() {
int password;
 do{
 printf("Enter your password: ");
 scanf("%d",&password);
  if (password != 1234) {
    printf("Acess Denied\n"); 
   } 
   }while (password != 1234); 
    printf("Acess Granted\n");
    return 0;
}