#include<stdio.h>
int main ()
{
    int marks, attendence, annual_family_income ;

    printf("Enter your marks\n") ;
    scanf("%d", &marks) ;
    printf("Enter attendence percentage\n") ;
    scanf("%d", &attendence) ;
    printf("Enter your annual family income\n") ;
    scanf("%d", &annual_family_income) ;

    if (marks < 50)
    {
        printf("Not eligible: Marks too low") ;
        return 0 ;
    }
    if (attendence<75)
    {
        printf("Not eligible: Attendence too low") ;
        return 0 ;
    }
    if (annual_family_income > 80000)
    {
        printf("Not eligible: Income too high") ;
        return 0 ;
    }

    if ((marks >= 90) && (attendence >= 90))
    {
        printf("Eligible for full scholarship") ;
    }
    else if ((marks>=75) && (attendence>=85))
    {
        printf("Eligible for half scholarship") ;
    }
    else
    {
        printf("Quarter scholarship") ;
    }
}