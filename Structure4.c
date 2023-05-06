#include<stdio.h>
struct Demo
{
    int i;
    float j;
    int *ip; 
    float *fp;
};
int main()
{
    struct Demo obj;
    int No=10;
    float f=90.8;
    obj.i=11;
    obj.j=50.4;
    obj.ip=&No;
    obj.fp=&f;

    printf("%d\n",obj.i);//11
    printf("%f\n",obj.j);//50.4
    printf("%d\n",*(obj.ip));//10
    printf("%d\n",No);//10
    printf("%f\n",f);//90.8
    printf("%f\n",*(obj.fp));//90.8
    return 0;
}