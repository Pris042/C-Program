#include <stdio.h>

int main()
{
    int A, B, Sum, r;

    printf("Enter the first number: \n");
    scanf("%d", &A);

    printf("Enter the second number: \n");
    scanf("%d", &B);

    if (B == 0)
        {
            printf("You have entered zero, please try again!\n");
            printf("Enter the second number: \n");
            scanf("%d", &B);
            Sum = A / B;
            printf("The integer division of %d by %d is %d. \n", A, B, Sum);
            r = A % B;
            printf("The remainder of integer division of %d by %d is %d. \n", A, B, r);
            return(0);
        }
    else  
        {
            Sum = A / B;
            printf("The integer division of %d by %d is %d. \n", A, B, Sum);
            r = A % B;
            printf("The remainder of integer division of %d by %d is %d. \n", A, B, r);
            return(0);
        }
}