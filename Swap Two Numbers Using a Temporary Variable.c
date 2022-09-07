#include <stdio.h>
#include <math.h>
int main()
{
    int A, B, Temp;
    printf("Please enter the First Number: ");
    scanf("%i", &A);
    printf("Please enter the Second Number: ");
    scanf("%i", &B);
    Temp = A;
    A = B;
    B = Temp; 
    printf("New value of A: %i  New value of B: %i", A, B);
    return(0);
}

