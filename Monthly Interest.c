#include <stdio.h>

int main()
{
    float Loan, interest, amount_to_pay;

    printf("Enter your loan amount; \n");
    scanf("%f", &Loan);

    printf("Enter your annual interest rate: \n");
    scanf("%f", &interest); 

    amount_to_pay = (Loan * (interest / 100.0)/12);

    printf("The amount of interest to pay each year is: %f \n", amount_to_pay);
    return(0);

}