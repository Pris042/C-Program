#include <stdio.h>


int main()
{
    int i, N, sum = 0;

    printf("Enter a value: \n");
    scanf("%d", &N);

 while (N < 0)
 {
     printf("You have entered a negative value. Enter a new value again; \n");
     scanf("%d", &N);
     continue; 
 }
 
    if (N == 0)
        {
            return(0);
        }

for (i =0; i <= N; i++)
    {
        if (i % 2 != 0)
            {
                printf("%d\n", i);
                sum = sum + i;
            }
    } 

    printf("\n");
    printf("%d\n", sum);

} 