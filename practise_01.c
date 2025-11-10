#include <stdio.h>
int main(){

    int num1, num2, num3, sum;
    float avg;

    printf("Enter numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = (float)sum/3;

    printf("Sum=%d\n", sum);  //type casting 
    printf("Average=%.2f\n", avg);


    return 0;
}