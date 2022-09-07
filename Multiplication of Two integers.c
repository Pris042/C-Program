/**
 * @file Firstprog.c
 * @author Priscilia 
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
int main() 
{
    int num1, num2;
    int product; 

    printf("Please enter the first integer number: ");
    scanf("%d%*C", &num1);

    printf("Please enter the second integer number: ");
    scanf("%d%*c", &num2);

    product = num1 * num2;

    printf("product of the two number: %d/n", product);

    return(0);   
}
