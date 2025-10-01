    #include <stdio.h>

int main() {
    char name;
    int age;
    char grade;

    
    printf("Enter your name: ");
    scanf("%c", &name);

    printf("Enter your age:\n ");
    scanf("%d", &age);

    printf("Enter your grade: \n");
    scanf("%c", &grade);  

    
    printf("Hello, %c! You are %d years old and your grade is %c.\n", name, age, grade);

    return 0;
}


