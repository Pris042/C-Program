#include <stdio.h> 

int main()
{
    char response;

    printf("You have three choices \n");
    printf("Enter a for option 1\n");
    printf("Enter b for option 2\n");
    printf("Enter c for option 3\n");

    scanf("%c", &response);

    if (response == 'a' || response == 'A') 
    {
        printf("you have selected option 1/n");
    }
    
    if (response =='B' || response == 'b')
    {
        printf("you have selected 2/n");
    }

    if (response == 'c' || response == 'C')
    {
        printf("you have selected 3/n");
    }

    return(0);

}