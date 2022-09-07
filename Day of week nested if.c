#include <stdio.h>

int main()

{
    int A;
    printf("Enter a number between 1 and seven: \n");
    scanf("%d", &A);

    if (A == 1)
        {
            printf("The day of the week is Monday! \n");
            return(0);
        }
    else 
        if (A == 2)
            {
                printf("The day of the week is Tuesdays! \n");
                return(0);
            }
        else 
            if (A == 3)
                {
                    printf("The day of the week is Wednesday! \n");
                    return(0);
                }
            else 
                if (A == 4)
                    {
                        printf("The day of the week is Thursday! \n");
                        return(0); 
                    }
                else 
                    if (A == 5)
                        {
                            printf("The day of the week is Friday! \n");
                            return(0);
                        }
                    else 
                        if (A == 6)
                            {
                                printf("The day of the week is Satruday! \n");
                                return(0);
                            }
                        else 
                            if (A == 7)
                                {
                                    printf("The day of the week is Sunday! \n");
                                    return(0);
                                }
                            else 
                            {       
                                printf("You have entered a number outside of the range \n");
                                return(0);
                            }       

return(0);
}