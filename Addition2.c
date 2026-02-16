#include<stdio.h>
int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter First Number : \n");
    scanf("%d",&No1);
    
    printf("Enter Second Number : \n");
    scanf("%d",&No2);

    Ans = No1 + No2;

    printf("Addition of %d and %d is %d",No1,No2,Ans);

    return 0;
}