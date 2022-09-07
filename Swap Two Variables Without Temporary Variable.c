#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    printf("Please enter the First Number: ");
    scanf("%i", &A);
    printf("Please enter the Second Number: ");
    scanf("%i", &B);
    A = A + B;
    B = A - B;
    A = A - B;

    printf("New value of A: %i  New value of B:  %i", A, B);
    return(0);
}


