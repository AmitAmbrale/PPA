#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
}obj1,obj2;
int main()
{
    //struct Demo obj1;
    //struct Demo obj2;

    obj1.i=11;
    obj1.f=90.90;//Direct initialization list
    obj1.j=51;

    obj2.i=22;
    obj2.f=21.9;//Use of Direct member access operator
    obj2.j=30;

    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);
    printf("%d\n",obj1.j);

    printf("%d\n",obj2.i);
    printf("%f\n",obj2.f);
    printf("%d\n",obj2.j);


}