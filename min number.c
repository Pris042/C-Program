#include <stdio.h>

int main()
{
    int A, B, C, D, Min;

    printf("Enter the First number: \n");
    scanf("%d", &A);
    printf("Enter the Second number: \n");
    scanf("%d", &B);
    printf("Enter the Third number: \n");
    scanf("%d", &C);
    printf("Enter the Fourth number: \n");
    scanf("%d", &D);


    if (A < C  && A < B && A < D)
        {
            Min = A; 
            printf(" The Smallest Number is %d", Min);
            return(0);
        }
    
    if (C < A && C < B && C < D)
        {
            Min = C;
            printf(" The Smallest Number is %d", Min);
            return(0);
        }
    if (B < A && B < C && B < D)
        {
            Min = B;
            printf("The Smallest Number is %d", Min);
            return(0);
        }
    else 
        Min = D;
        printf("The Smallest Number is %d", Min);
        return(0);


}