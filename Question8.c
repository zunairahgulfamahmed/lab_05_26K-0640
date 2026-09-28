#include<stdio.h>
int main ()
{
    int user_permission ;

    printf("Please enter your permission status") ;
    scanf ("%d", &user_permission) ;

    if (user_permission & 4)
    {
        printf("Access Granted: Full Control") ;
    }

    else if (((user_permission & 4)==0) && (user_permission&2) && (user_permission&1))
    {
        printf("Access Granted: Read and Write") ;
    }

    else if (((user_permission & 4)==0) && ((user_permission & 2)==0) && (user_permission & 1) )
    {
        printf("Access Granted: Read only") ;
    }
    
    else 
    {
        printf("Access Denied") ;
    }


}