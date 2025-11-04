#include <stdio.h>

int main() {
    FILE *fptr;
    char title[100];
    char choice;

    fptr = fopen("C:\\Users\\PC\\Documents\\c files\\borrowed_books.txt", "a");

    do {
        printf("Enter book title: ");
       fgets(title, sizeof(title) ,stdin);
        char data [100];
        fputs(title, fptr);
        printf("Book title successfully stored!\n");
        printf("Do you want to enter another title? (yes/no): ");
        scanf(" %c", &choice);
        
    } while (choice == 'yes' & choice == 'yes');

    fclose(fptr);
    printf("\nAll entries saved successfully in borrowed_books.txt\n");

    return 0;
}