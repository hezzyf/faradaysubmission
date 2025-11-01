#include <stdio.h>
int main() {
int revenue[7] = {1200,1250,1300,1400,1800,2000,2200};
int sum = 0;
int average = 0;
int i;

for (i = 0; i <7;i++) {
    sum +=revenue[i];
}
  printf("Total weekly revenue = %d\n",sum);
  {
      average =sum/7;
      printf("average daily revenue = %d\n" ,average);
  }
return 0;
}