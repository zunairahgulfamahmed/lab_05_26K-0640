#include<stdio.h>
int main ()
{
    int stream, interest ;

    printf("Please enter your stream \n1)Science \n2)Commerce \n3)Arts \n") ;
    scanf("%d", &stream) ;

    if (stream==1)
    {
        printf("Please enter your interest \n1)Biology \n2)Physics \n3)Chemistry \n") ;
        scanf("%d", &interest) ;

        if (interest==1)
        {
            int response ;
            printf("Are you interested in medicine \n1)Yes \n2)No\n") ;
            scanf("%d", &response) ;
            if (response==1)
            {
                printf("Your recommended course: MBBS\n") ;
            }
            else if (response==2)
            {
                printf("Your recommended course: Biotechnology\n") ;
            }
        }
        else if (interest==2)
        {
            printf("Your recommended course: BS Physics\n") ;
        }
        else if (interest==3)
        {
            printf("Your recommended course: BS Chemistry\n") ;
        }
        else 
        {
            printf("Invalid Interest\n") ;
        }
    }
    else if (stream==2)
    {
        printf("Please enter your interest \n1)Accounting \n2)Marketing\n") ;
        scanf("%d", &interest) ;

        if (interest==1)
        {
            printf("Your recommended course: BS Accounting and Finance") ;
        }
        else if (interest==2)
        {
            printf("Your recommended course: BBA/BS Marketing") ;
        }
        else
        {
            printf("invalid interest") ;
        }
    }
    else if (stream==3)
    {
        printf("Please enter your interest\n1)Literature \n2)History \n3)Psychology \n") ;
        scanf("%d", &interest) ;
        if (interest==1)
        {
            printf("Your recommended course: BS English Literature") ;
        }
        else if (interest==2)
        {
            printf("Your recommended course: BS History") ;
        }
        else if (interest==3)
        {
            printf("Your recommended course: BS Psychology ") ;
        }
        else 
        {
        printf("Invalid interest") ;
        }
    }
    else 
    {
        printf("Invalid Stream") ;
    }

}