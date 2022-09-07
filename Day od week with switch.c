#include <stdio.h> 

int main()

{
    int A; 
    printf("Enter a number between one and seven: \n");
    scanf("%d", &A);

switch (A)
{
case 1:
    printf("The day of the week is Monday! \n");
    break;
case 2: 
    printf("The day of week is Tuesday! \n");
    break;
case 3: 
    printf("The day of week is Wednesday! \n");
    break;
case 4: 
    printf("The day of week is Thursday! \n");
    break;
case 5:
    printf("The day of week is Friday! \n"); 
    break;
case 6: 
    printf("The day of the week is Saturday! \n"); 
    break; 
case 7:
    printf("The day of week is Sunday! \n");
    break;
default:
    printf("You have entered a value outside of the range \n");
    break; 
}


return(0);

}