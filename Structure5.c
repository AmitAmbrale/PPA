#include<stdio.h>
struct Demo
{
    int i;
    float j;
    int Arr[4];
};
int main()
{
    struct Demo obj;

    obj.i=10;
    obj.j=45.7;
    obj.Arr[0]=10;
    obj.Arr[1]=20;
    obj.Arr[2]=30;
    obj.Arr[3]=40;

    printf("%d\n",obj.i);
    printf("%f\n",obj.j);
    printf("%d\n",obj.Arr[0]);
    printf("%d\n",obj.Arr[1]);
    printf("%d\n",obj.Arr[2]);
    printf("%d\n",obj.Arr[3]);

    return 0;
}