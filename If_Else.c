#include<stdio.h>

int main()
{
    int No = 0, Result = 0;

    printf("Enter Number : \n");
    scanf("%d",&No);

    Result = No % 2;

    if(Result == 0)
    {
        printf("It is Even Number \n");
    }
    else
    {
        printf("It is Odd Number \n");
    }

    return 0;
}