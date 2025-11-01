#include <stdio.h>
int main() {
 float F,C;
 printf("enter temperature in fahrenheit\n ");
 scanf("%f" ,&F);
 
 {
     C = (F-32)*5/9;
     printf("temperature in celsious:%.1f\n" ,C);
 }
    return 0;
}