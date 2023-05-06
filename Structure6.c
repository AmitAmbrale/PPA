#include<stdio.h>
struct Demo 
{
    int i;
    float j;
};
int main()
{
    struct Demo Arr[4];

    //Arr is one dimensional array which contains 4 elements each element is of struct Demo
    //Where Demo is a structure which contains 2 members one is integer and one is float

    Arr[0].i=10;
    Arr[0].j=10.1;

    Arr[1].i=20;
    Arr[1].j=20.2;

    Arr[2].i=30;
    Arr[2].j=30.3;

    Arr[3].i=40;
    Arr[3].j=40.4;

    printf("%d\n",Arr[0].i);
    printf("%f\n",Arr[0].j);

    printf("%d\n",Arr[1].i);
    printf("%f\n",Arr[1].j);

    printf("%d\n",Arr[2].i);
    printf("%f\n",Arr[2].j);

    printf("%d\n",Arr[3].i);
    printf("%f\n",Arr[3].j);

    return  0;
}