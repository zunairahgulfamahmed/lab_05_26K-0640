#include<stdio.h>
int main ()
{
    int age, oxygen_level, heart_rate ;

    printf("Enter your age \n") ;
    scanf("%d", &age) ;
    printf("Enter your oxygen level \n") ;
    scanf("%d", &oxygen_level) ;
    printf("Enter heart rate \n") ;
    scanf("%d", &heart_rate) ;
    
    if (oxygen_level < 90)
    {
        printf("Critical: Immediate attention") ;
    }
    else if (heart_rate > 130 || heart_rate < 40)
    {
        printf("Critical: Cardiac alert") ;
    }
    else if (age >= 65 && oxygen_level < 95)
    {
        printf("High priority") ;
    }
    else if (age <= 5 && heart_rate > 110)
    {
        printf("High priority") ;
    }
    else if (oxygen_level < 97)
    {
        printf("Medium priority") ;
    }
    else 
    {
        printf("Low priority") ;
    }
}