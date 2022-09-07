#include <stdio.h>

int main()
{
    float Assignment, Final_Exam, Final_Grade, Overall_Score;

    printf("Enter Assignment Mark: \n");
    scanf("%f", &Assignment);

    printf("Enter Final Exam Mark: \n");
    scanf("%f", &Final_Exam);

    Overall_Score = ((((Assignment / 100.0) + (Final_Exam / 100.0)) * 100.0) * 0.5);
    Final_Grade = Overall_Score;
 
    if (50 <= Final_Exam  && Overall_Score < 50)
        {
            printf("Your Final Grade is %f. You have Not Passed! As your Final Exam mark is greater than 50 and your overall grade is less than 50 you have recieved an SA  - Supplementary Assignment!", Final_Grade);
            return(0);
        }
    else 
        if (50 > Final_Exam && 50 < Overall_Score)
            {
                printf("Your Final Grade is %f. You have Not Passed! As your overall score is greater than 50 and you failed your exam you have recieved an SX - Supplementary exam", Final_Grade);
                return(0);
            }
        else 
            if (50 < Final_Exam && Overall_Score >= 50)
                if (81 <= Final_Grade || Final_Grade <= 100)
                    {
                        printf("Your Final Grade is %f . You have Passed! You have recieved a HD - High Distinction\n", Final_Grade);
                        return(0);
                    }
                else 
                    {
                    if ( 71 <= Final_Grade || Final_Grade <= 80)
                        {
                            printf("Your Final Grade is %f . You have Passed! You have recieved a D - Distinction\n", Final_Grade);
                            return(0);
                        }
                    }      
                    else 
                        
                        if (61 <= Final_Grade || Final_Grade <= 70)
                            {
                                printf("Your Final Grade is %f . You have Passed! You have recieced a C - Credit\n", Final_Grade);
                                return(0);
                            }
                        
                        else 
                            {
                            if (51 <= Final_Grade || Final_Grade <= 60)
                                {
                                    printf("Your Final Grade is %f . You have Passed! You have recieved a P - Pass", Final_Grade);
                                    return(0);
                                }   
                            }    
                                
                    
                               
    

return(0);

}



/* 

if (Overall_Score < 50)
        if (Final_Exam < 50)
            if (Final_Grade >= 41 || Final_Grade <= 50)
                {
                    printf("Your Final Grade is %d .You have not passed. You have recieved a SX - Supplementary Exam", Final_Grade);
                        return(0);
                }
                else {
                    if (Final_Grade <= 40)
                        {
                            printf("Your Final Grade is %d . You have not Passed. You have recicieved a F - Fail! \n", Final_Grade);
                            return(0);
                        }
                }

    */

    