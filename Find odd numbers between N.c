#include <stdio.h>


int main()
{
    int i, N;

    printf("Enter a value: \n");
    scanf("%d", &N);
     
    
    for (i = 0; i  <= N; i++)
    {       
            if (N < 0)
                {
                    printf("You have entered an inavlid number. \n");
                }
            else 
                if (i % 2 != 0)
                {
                    printf("%d\n",i);
                }
    }


return (0);
}