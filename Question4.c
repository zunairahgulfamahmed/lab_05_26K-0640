#include<stdio.h>
int main ()
{
    int card_status, pin_correctness, account_balance, withdrawal_amount, new_balance ;

    printf("Enter card status \n1)Valid = 1 \n2)Blocked = 0") ;
    scanf("%d", &card_status) ;
    printf("Enter pin status \n1)Correct \n2)Incorrect") ;
    scanf("%d", &pin_correctness) ;
    printf("Enter Account Balance") ;
    scanf("%d", &account_balance) ;
    printf("Enter withdrawal amount") ;
    scanf("%d", &withdrawal_amount) ;

    if (card_status==0)
    {
        printf("Card blocked, Contact the bank") ;
        return 0 ;
    }

    if (pin_correctness==2)
    {
        printf("Incorrect pin") ;
        return 0 ;
    }

    if (withdrawal_amount<=0)
    {
        printf("Invalid amount") ;
        return 0 ;
    }
    else if (withdrawal_amount>account_balance)
    {
        printf("Insufficient Balance") ;
        return 0 ;
    }
    else if (withdrawal_amount>25000)
    {
        printf("Daily limit exceeded") ;
        return 0 ;
    }
    else if ((account_balance-withdrawal_amount) < 1000) 
    {
        printf("Minimum balance must be maintained") ;
        return 0 ;
    }
    else
    {
        printf("Dispensing Cash") ;
    }

    new_balance = account_balance - withdrawal_amount ;
    



}