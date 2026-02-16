#include<stdio.h>
int main()
{
    int i = 10;
    float f = 12.456;
    double d = 123.23455;
    char ch = d;

    printf("%lu\n",sizeof(f));    // 4
    printf("%lu\n",sizeof(d));    // 8
    printf("%lu\n",sizeof(i));    // 4
    printf("%lu\n",sizeof(ch));   // 1

    return 0;
}