#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10];   //Static memory allocation
    int size = 0;
    int *ptr=NULL;


    printf("Enter the size of array\n:");
    scanf("%d",&size);

    //Step : Allocate the memmory
    ptr=(int *)calloc(sizeof(int), size);//void *__cdecl calloc(size_int, size_t)


    //Step 2 : Use the memory (In logic building batch)
    
    //Step 3 : Deaalocate the memory
    free(ptr);
    return 0;

}