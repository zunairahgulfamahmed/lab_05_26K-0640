#include<stdio.h>
int main ()
{
    int accuracy, confidence_score, dataset_size, user_role, status_flags, data_set ;
    float model_score ;

    printf("Enter accuracy (0-100)\n") ;
    scanf ("%d", &accuracy) ;
    printf("Enter confidence score (0-100)\n") ;
    scanf("%d", &confidence_score) ;
    printf("Enter dataset size\n ") ;
    scanf("%d", &dataset_size) ;
    printf("Enter user role \n1)Intern \n2)Engineer \n3)Admin\n") ;
    scanf("%d", &user_role) ;
    printf("Enter status flag \n1 = Trained \n2 = Validated \n4 = Approved \n8 = Depricated\n") ;
    scanf("%d", &status_flags) ;

    if (dataset_size / 1000 < 10)
    {
        data_set = dataset_size / 1000;
    }
    else
    {
        data_set = 10;
    }

     model_score = (accuracy*0.5) + (confidence_score*0.3) + (data_set*2) ;

    printf("the model score is: %.2f \n", model_score) ;

    if (status_flags & 8)
    {
        printf("Rejected: model deprecated");
    }
    else if ((status_flags & 1) == 0)
    {
        printf("Rejected: not trained");
    }
    else if ((status_flags & 2) == 0)
    {
        printf("Rejected: not validated");
    }
    else if ((status_flags & 4) == 0)
    {
        printf("Pending: awaiting approval");
    }
    else if (accuracy < 70 || confidence_score < 60)
    {
        printf("Rejected: performance too low");
    }
    else if (dataset_size < 5000)
    {
        printf("Rejected: dataset too small");
    }
    else if (user_role == 1)
    {
        printf("Denied: interns cannot deploy");
    }
    else if (user_role == 2 && model_score < 80)
    {
        printf("Denied: engineer needs higher score");
    }
    else
    {
        printf("Approved for deployment");
    }

    printf("\nSize of accuracy: %zu bytes", sizeof(accuracy)) ;
    printf("\nSize of confidence score: %zu bytes", sizeof(confidence_score)) ;
    printf("\nSize of Dataset size: %zu bytes", sizeof(dataset_size)) ;
    printf("\nSize of data set: %zu bytes", sizeof(data_set)) ;
    printf("\nSize of user role: %zu bytes", sizeof(user_role)) ;
    printf("\nSize of status flags: %zu bytes", sizeof(status_flags)) ;
    printf("\nSize of model score: %zu bytes", sizeof(model_score)) ;

    if ( model_score> ((accuracy+confidence_score)/2))
    {
        printf("Model score is greater than average of accuracy and confidence") ;
    }
    else 
    {
        printf("Model score is not greater than average of accuracy and confidence") ;
    }

}