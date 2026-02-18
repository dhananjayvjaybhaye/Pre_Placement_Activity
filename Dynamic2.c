#include<stdio.h>       // Standard input output
#include<stdlib.h>      // Standard Library

int main()
{
    int *ptr = NULL;

    // step 1 : Allocate the Memory
    ptr = (int *)malloc(5 * sizeof(int));

    // Step 2 : Use the memory
    // LOGIC
    
    // Step 3 : Deallocate the memory
    free(ptr);

    return 0; 
}