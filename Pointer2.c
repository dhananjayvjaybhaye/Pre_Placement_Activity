#include<stdio.h>

int main()
{
    char c = 'm';
    int i = 11;
    float f = 3.14;
    double d = 39.1223;

    char *cptr = &c;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    /*
    
    i               11 
    c               m
    f               3.14
    d               39.1223
    &i              200
    &f              300
    &d              400
    &c              100
    sizeof(i)       4
    sizeof(f)       4
    sizeof(d)       8
    sizeof(c)       1
    iptr            200
    cptr            100
    fptr            300
    dptr            400
    *iptr           11
    *fptr           3.14
    *dptr           39.1223
    *cptr           m
    sizeof(iptr)    8
    sizeof(cptr)    8
    sizeof(fptr)    8
    sizeof(dptr)    8
    
    */

    return 0;
}