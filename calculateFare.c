#include <stdio.h>
int main() {
    float fare,distance;
    printf("Enter distance\n ");
    scanf("%f" ,&distance);
    
    {
        fare = distance * 50;
        printf("your fare is:%.1f\n" ,fare);
    }

    return 0;
}