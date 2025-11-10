#include <stdio.h>

int main() {
    FILE *file;
    float amount, total_sales = 0.0;

    file = fopen("C:\\Users\PC\\Documents\\c files\\sales.txt", "r");
    if (file == NULL) {
        perror("Error opening sales.txt");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total_sales += amount;
    }

    fclose(file);
    printf("?? Total sales for the day: %.2f\n", total_sales);

    return 0;
}