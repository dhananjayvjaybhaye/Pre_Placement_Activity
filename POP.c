#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iResult = 0;
    iResult = iNo1 + iNo2;
    return iResult;
}

int Subtraction(int iNo1, int iNo2)
{
    int iResult = 0;
    iResult = iNo1 - iNo2;
    return iResult;
}

int main()
{
    int value1 = 0, value2 = 0, Ret = 0;

    printf("Enter First Number : \n");
    scanf("%d",&value1);
    
    printf("Enter Second Number : \n");
    scanf("%d",&value2);

    Ret = Addition(value1, value2);
    printf("Additon is %d\n",Ret);

    Ret = Subtraction(value1, value2);
    printf("Subtraction is %d\n",Ret);

    return 0;
}