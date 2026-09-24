#include<stdio.h>
int main ()
{
    int vehicle_type ;
    int hours_parked ;
    int membership ;
    int fee ;
    int final_charges ;

    printf("Enter vehicle type: \n1)Bike \n2)Car \n3)Truck \n") ;
    scanf("%d", &vehicle_type) ;
    printf("Enter time for parking in hours \n") ;
    scanf("%d", &hours_parked) ;
    printf("Enter your membership status \n 1)Member 2)Non Member \n") ;
    scanf("%d", &membership) ;

    if (vehicle_type != 1 && vehicle_type != 2 && vehicle_type != 3 )
    {
        printf("Invalid vehicle") ;
        return 0 ;
    }

    if (hours_parked <= 0)
    {
        printf("Invalid Duration") ;
        return 0 ;
    }

    if (vehicle_type==1)
    {
        fee = hours_parked * 20 ;
    }
    else if (vehicle_type==2)
    {
        if (hours_parked <= 2)
        {
            fee = 50 ;
        }
        else
        {
            fee = 80 * (hours_parked - 2) ;
        }
    }
    else
    {
        if (hours_parked <= 3)
        {
            fee = 100 ;
        }
        else 
        {
            fee = 150 * (hours_parked - 3) ;
        }
    }

    printf("\n your fee is %d PKR", fee) ;

    if (membership == 1)
    {
        if (fee>200)
        { 
           final_charges = fee - (fee * 0.15) ;
           printf("\n Your total charges after discount are %d PKR", final_charges) ;
        }
    }


}