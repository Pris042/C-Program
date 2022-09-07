#include <stdio.h>

int main()
{
    float A, B, C, Sum;
    printf("Please enter first numbers: ");
    scanf("%f*c", &A);
    printf("Please enter the second number: ");
    scanf("%f*c", &B);
    printf("Please enter the third number: ");
    scanf("%f*c", &C);
    Sum = A + B + C;
    printf("The sum of the three numbers is: %f\n", Sum);
    return(0);
}
