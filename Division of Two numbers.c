#include <stdio.h>

int main()
{
    int A, B, C;
    printf("Please enter the first number: ");
    scanf("%i", &A);
    printf("Please enter the second number: ");
    scanf("%i", &B);
    C = A / B;
    printf("The result of division is: %i", C);
    return(0);
}
