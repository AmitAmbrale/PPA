#include<stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct Demo obj1;
    struct Demo obj2;

    obj1.i=11;
    obj1.f=90.90;
    obj1.j=21;

    obj2.i=51;
    obj2.f=78.78;//Member by member initializatioon list
    obj2.j=99;

    printf("%d\n",obj1.i);
    printf("%f\n",obj1.f);
    printf("%d\n",obj1.j);

    printf("%d\n",obj2.i);
    printf("%f\n",obj2.f);
    printf("%d\n",obj2.j);
    
    return 0;

}