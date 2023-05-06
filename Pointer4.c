//pointer to array
#include<stdio.h>
int main()
{
    int Arr[5]={10,20,30,40,50};
    int *p=&(Arr[1]);
    int *q=&(Arr[3]);

    printf("%d\n",&Arr[1]);
    printf("%d\n",p);
    printf("\n");
    printf("\n");

    printf("%d\n",&Arr[3]);
    printf("%d",q);
    return 0;
}