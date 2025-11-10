#include <stdio.h>
struct Student {
    char name[70];
    char reg_no[30];
    float total_marks;
};

int main() {
    struct Student student;
    FILE *file;

    file = fopen("C:\\Users\\PC\\Documents\\c files\\results. dat", "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Student Examination Results:\n");
    printf("----------------------------\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Total Marks: %.2f\n\n", student.total_marks);
    }

    fclose(file);
    return 0;
}