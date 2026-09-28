#include<stdio.h>
int main ()
{
    int card_status, pin_correctness, account_balance, withdrawal_amount, new_balance, two_thousand_notes, five_hundred_notes, one_hundred_notes, remaining ;

    printf("Enter card status \n1)Valid = 1 \n2)Blocked = 0\n") ;
    scanf("%d", &card_status) ;
    printf("Enter pin status \n1)Correct \n2)Incorrect\n") ;
    scanf("%d", &pin_correctness) ;
    printf("Enter Account Balance\n") ;
    scanf("%d", &account_balance) ;
    printf("Enter withdrawal amount\n") ;
    scanf("%d", &withdrawal_amount) ;

    if (card_status==0)
    {
        printf("Card blocked, Contact the bank\n") ;
        return 0 ;
    }

    if (pin_correctness==2)
    {
        printf("Incorrect pin\n") ;
        return 0 ;
    }

    if (withdrawal_amount<=0)
    {
        printf("Invalid amount\n") ;
        return 0 ;
    }
    else if (withdrawal_amount>account_balance)
    {
        printf("Insufficient Balance\n") ;
        return 0 ;
    }
    else if (withdrawal_amount>25000)
    {
        printf("Daily limit exceeded\n") ;
        return 0 ;
    }
    else if ((account_balance-withdrawal_amount) < 1000) 
    {
        printf("Minimum balance must be maintained\n") ;
        return 0 ;
    }
    else
    {
        printf("Dispensing Cash\n") ;
    }

    new_balance = account_balance - withdrawal_amount ;
    remaining = withdrawal_amount;
    two_thousand_notes = remaining / 2000;
    remaining = remaining % 2000;

    five_hundred_notes = remaining / 500;
    remaining = remaining % 500;

    one_hundred_notes = remaining / 100;
    remaining = remaining % 100;

    printf("\nYour current balance is %d PKR", new_balance) ;
    printf("\n2000 notes: %d", two_thousand_notes);
    printf("\n500 notes: %d", five_hundred_notes);
    printf("\n100 notes: %d", one_hundred_notes);        
}