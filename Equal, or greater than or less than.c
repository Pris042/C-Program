#include <stdio.h> 

int main()
{
    int x, y;

    printf("Enter number 1: \n");
    scanf("%d", &x);

    printf("Enter number 2: \n");
    scanf("%d", &y);

    if (x==y)
        {
            printf("Both values are equal\n");
            return(0);
        }
    else 
        if (x > y)
            {
                printf("Last value larger than first value.\n");
                return(0);
            }
        else 
            printf("2nd value is larger than first value.\n");
            return(0);
    
    return(0);
}