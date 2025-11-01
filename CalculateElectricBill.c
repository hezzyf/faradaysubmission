#include <stdio.h>
int main() {
    float unitsconsumed,Bill;
    
    printf("Enter unitsconsumed\n ");
    scanf("%f" ,&unitsconsumed);
    
    if (unitsconsumed <= 100) {
    Bill = unitsconsumed*10;
    printf("Your Bill is:%.2f\n" ,Bill);
    }
    if (unitsconsumed <= 200) {
      Bill = (100*10) + ((unitsconsumed - 100) * 15);  
      printf("Your Bill is:%.2f\n" ,Bill);
    }
    if (unitsconsumed > 200) {
     Bill = (100 * 10) + (100*15) + ((unitsconsumed-200)*20);
     printf("Your Bill is:%.2f\n" ,Bill);
    }
    return 0;
    }