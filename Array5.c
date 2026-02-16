#include<stdio.h>
int main()
{
    int Arr[4] = {11,21,51,101};

    printf("%d\n",Arr[0]);              // 11
    printf("%d\n",Arr[1]);              // 21
    printf("%d\n",Arr[2]);              // 51
    printf("%d\n",Arr[3]);              // 101

    printf("%d\n",sizeof(Arr));         // 16
    printf("%d\n",sizeof(Arr[0]));      // 4
    printf("%d\n",sizeof(Arr[2]));      // 4

    printf("%lu\n",Arr);                // 100 
    printf("%lu\n",&Arr);               // 100
    printf("%lu\n",&Arr[0]);            // 100
    printf("%lu\n",&Arr[2]);            // 108
    printf("%lu\n",&Arr[3]);            // 112

    return 0;
}