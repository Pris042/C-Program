#include <stdio.h>

int main()
{
    int Student_Mark, A;

    printf("Enter your student mark: \n");
    scanf("%i", &A);

    Student_Mark = A;

    switch(Student_Mark) {
        case 81 ... 100:
            printf("You have recieved HD - High Distinction!\n");
            break;
        
        case 71 ... 80:
            printf("You have recieved D - Distinction!\n");
            break; 

        case 61 ... 70:
            printf("You have recieved C - Credit!\n");
            break;

        case 51 ... 60:
            printf("You have recieved P - a Pass!\n");
            break;

        case 41 ... 50:
            printf("You have recieved SX - a Supplementary Exam!\n");
            break;

        case 0 ... 40:
            printf("You have recieved F - a Fail!\n");
            break;

        default:
            printf("You have entered a value that exceeds 100!\n");

    }
    return(0);

}