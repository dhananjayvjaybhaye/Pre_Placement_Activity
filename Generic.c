#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;
    double d = 90.12345;

    char *cptr = &ch;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    void *vptr = NULL; 

    printf("%c\n",cptr);
    printf("%d\n",iptr);
    printf("%f\n",fptr);
    printf("%f\n",dptr);

    vptr = &ch;
    printf("%c\n",*(char *)vptr);

    vptr = &i;
    printf("%d\n",*(int *)vptr);

    return 0;
}