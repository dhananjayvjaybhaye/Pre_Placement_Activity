#include<stdio.h>

int main()
{
    int A = 10, B = 10;
    int No1 = 0, No2 = 0;

    No1 = A--;
    printf("value of No1 : %d\n",No1);  // 10
    printf("value of A : %d\n",A);      // 9

    No2 = --B;
    printf("value of No2 : %d\n",No2); // 9
    printf("value of B : %d\n",B);     // 9 

    return 0;
}