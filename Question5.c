#include<stdio.h>
int main ()
{
    int time, motion_detected, light_level, room ;

    printf("Enter time (0-23) \n") ;
    scanf("%d", &time) ;
    printf("Is motion detected \n1)Yes \n2)No \n") ;
    scanf("%d", &motion_detected) ;
    printf("Enter light level (0-100) \n") ;
    scanf("%d", &light_level) ;
    printf("Please pick a room \n1)Living Room \n2)Bedroom \n3)Kitchen\n") ;
    scanf("%d", &room) ;

    if (room==1 || room == 2)
    {
        if (time>=6 && time<18 && motion_detected == 1) 
        {
            printf("Day Mode: Lights ON") ;
        }
        else if (time >=18 && time < 23 && motion_detected==1)
        {
            printf("Evening Mode: Day Lights") ;
        }
        else if ((time >= 23 || time <= 6) && motion_detected == 1)
        {
            printf("Night Mode: Lights Off") ;
        }
        else if (motion_detected==0)
        {
            printf("Away Mode: All Off") ;
        }
    }

    if (room==3)
    {
        int cooking ;
        printf("Are you cooking \n1)Yes \n2)No\n") ;
        if (cooking==1)
        {
            printf("Mode: Fan On") ;
        }
        
        if (time>=6 && time<18 && motion_detected == 1) 
        {
            printf("Day Mode: Lights ON") ;
        }
        else if (time >=18 && time < 23 && motion_detected==1)
        {
            printf("Evening Mode: Day Lights") ;
        }
        else if ((time >= 23 || time <= 6) && motion_detected == 1)
        {
            printf("Night Mode: Lights Off") ;
        }
        else if (motion_detected==0)
        {
            printf("Away Mode: All Off") ;
        }
    }

}