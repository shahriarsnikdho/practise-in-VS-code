#include <stdio.h>
    int main()
    {
        int a,b; //declaring variables
        printf("Enter two numbers:");
        scanf ("%d", & a);
        scanf ("%d", &b);

        if ( a>b )
            printf("%d is the largest\n",a);
        else
            printf("%d is the largest\n",b);

        return 0;

        // Find the largest of two numbers
    }
