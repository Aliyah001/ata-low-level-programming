#include <stdio.h>

int main() {
    char name[] = "John";
    int age = 20;
    float gpa = 3.75;
    char grade = 'A';

 
    printf("Name\tAge\tGPA\tGrade\n");
    printf("%s\t%d\t%.2f\t%c\n", name, age, gpa, grade);

    printf("\n"); 


    printf("Name\tAge\tGPA(as int)\tGrade\n");
    printf("%s\t%d\t%d\t\t%c\n", name, age, (int)gpa, grade);

    return 0;
}
