#include<stdio.h>
int main ()
{
   int permission ;
   printf("Enter Your permission Status \n") ;
   scanf("%d", &permission) ;
   
   if (permission & 16)
   {
        printf("Full Access: Admin \n") ;
   }

   else if ((permission & 8) && (permission & 2) )
   {
    printf("Access Granted: Delete and Write \n") ;
   }

   else if (((permission & 2)==0) && (permission & 4))
   {
    printf("Access Granted: Execute Only \n") ;
   }

   else if (((permission & 2)==0) && (permission & 1))
   {
    printf("Access Granted: Read Only \n") ;
   }

   else if (((permission & 1)==0) && ((permission & 2)==0) && ((permission & 4)==0) && ((permission & 8)==0) && ((permission & 16)==0) )
   {
    printf("Access Denied\n") ;
   }

   else 
   {
    printf("Access: Custom permissions\n") ;
   }

    printf("Bits present are \n") ;

    if (permission & 1)
        printf("\nREAD\n");

    if (permission & 2)
        printf("WRITE\n");

    if (permission & 4)
        printf("EXECUTE\n");

    if (permission & 8)
        printf("DELETE\n");

    if (permission & 16)
        printf("ADMIN\n");


}