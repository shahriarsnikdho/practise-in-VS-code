#include <stdio.h>

int main()
{
    int age;
    float cgpa;
    char grade;

    printf("Enter your age:");
    scanf("%d",&age);
    printf("age: %d\n",age);

    printf("Enter your cgpa:");
    scanf("%f",&cgpa);
    printf("cgpa: %.2f\n",cgpa);

    printf("Enter your grade:");
    scanf(" %c",&grade);
    printf("grade:%c\n",grade);

    return 0;
}
