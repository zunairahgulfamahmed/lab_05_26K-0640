#include<stdio.h>
int main ()
{
    int category, subtype ;

    printf("Please Choose one category\n1)Greeting \n2)Query \n3)Complaint \n4)Feedback\n") ;
    scanf("%d", &category) ;
   
    if (category == 1)
    {
        printf("\nChoose one of the following subtypes\n1)Morning \n2)Evening") ;
        scanf("%d", &subtype) ;


        if (subtype==1)
        {
            printf("Good Morning!") ;
        }
        else if (subtype==2)
        {
            printf("Good Evening!") ;
        }
        else 
        {
            printf("invalid subtype") ;
        }
    }
    else if (category == 2)
    {
        printf("\nChoose one of the following subtypes\n1)Product \n2)Billing \n3)Technical") ;
        scanf("%d", &subtype) ;

        if (subtype==1)
        {
            printf("Your product query is being processed") ;
        }
        else if (subtype==2)
        {
            printf("Your billing query is being processed") ;
        }
        else if (subtype==3)
        {
            printf("Your technical query is being processed") ;
        }
        else
        {
            printf("Invalid subtype") ;
        }

    }
    else if (category == 3)
    {
        printf("\nChoose one of the following subtypes\n1)Delivery \n2)Qualty\n") ;
        scanf("%d", &subtype) ;
        if (subtype==1)
        {
            int responce ;
            printf("Is your order delayed \n1)yes \n2)No\n") ;
            scanf("%d", &responce) ;

            if (responce==1)
            {
                printf("Sorry for the delay, we will deliver your order ASAP\n") ;
            }
            else if (responce==2)
            {
                printf("Your complaint regarding delivery is being processed\n") ;
            }
            else 
            {
                printf("Invalid responce\n") ;
            }

        }
        else if (subtype==2)
        {
            printf("Your complaint regarding quality is being processed\n") ;
        }
        else
        {
            printf("invalid subtype\n") ;
        }

    }
    else if (category==4)
    {
        printf("\nChoose one of the following subtypes\n1)Positive Feedback\n2)Negative Feedback\n") ;
        scanf("%d", &subtype) ;

        if (subtype==1)
        {
            printf("Thankyou for your feedback") ;
        }
        else if (subtype==2)
        {
            printf("Sorry for the inconvienience") ;
        }
        else 
        {
            printf("Invalid subtype") ;
        }
    }
    else
    {
        printf("Invalid category") ;
    }
}