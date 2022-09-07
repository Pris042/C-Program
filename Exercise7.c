#include <stdio.h>

int main()
{
    int Automobile_Speed, temp;
    const int Sixty_Kilometers_Per_Hour = 60, Zero = 0, One = 1,Sixty_One_Kilometers_Per_Hour = 61, Sixty_Five_Kilometers_Per_Hour = 65, Sixty_Six_Kilometers_Per_Hour = 66, Seventy_Kilometers_Per_Hour = 70, Seventy_One_Kilometers_Per_Hour = 71, Eighty_Kilometers_Per_Hour = 80, Eighty_One_Kilometers_Per_Hour = 81;

    printf("Enter Automobile Speed in Km/h: \n");
    temp = scanf("%d",&Automobile_Speed);
    
    if (Automobile_Speed < Zero)
        {
            printf("You have entered an invalid number!\n");
            return(0);
        }
    else 
        if (temp != One)
            {
                printf("You have entered an invalid syntax!\n");
                return(0);
            }
        else 
            if (Automobile_Speed < Sixty_Kilometers_Per_Hour)
                {
                    printf("Not Speeding!\n");
                    return(0);
                }
            else 
                if (Automobile_Speed > Sixty_Kilometers_Per_Hour)
                    {
                        printf("Speeding!\n");
                    }
                    if (Sixty_One_Kilometers_Per_Hour >= Automobile_Speed || Automobile_Speed <= Sixty_Five_Kilometers_Per_Hour)
                        {
                            printf("You have been issued a warning!\n");
                            return(0);
                        }
                    else 
                        if (Sixty_Six_Kilometers_Per_Hour >= Automobile_Speed || Automobile_Speed <= Seventy_Kilometers_Per_Hour)
                            {
                                printf("You have been issued a fine of $80!\n");
                                return(0);
                            }
                        else 
                            if (Seventy_One_Kilometers_Per_Hour >= Automobile_Speed || Automobile_Speed <= Eighty_Kilometers_Per_Hour)
                                {
                                    printf("You have been issued a fine of $150\n");
                                    return(0);
                                }
                            else   
                                if (Eighty_One_Kilometers_Per_Hour <= Automobile_Speed)
                                    {
                                        printf("You have been issued a fine of $500!\n");
                                        return(0);
                                    }
                else 
    return(0);
}