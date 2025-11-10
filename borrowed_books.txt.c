#include <stdio.h>

int main() {
    char title[256];
    FILE *file;
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);


    file = fopen("C:\\Users\\PC\\Documents\\c files\\borrowed_books.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    
    fprintf(file, "%s", title);
    fclose(file);

    
    printf("? Book title successfully stored in borrowed_books.txt\n");

    return 0;
}