#include<stdio.h>
union Demo
{
  int i;
  float f;
  double d;

};
int main()
{
    union Demo obj;
    
    printf("%d\n",sizeof(obj));

    obj.i=10;
    printf("%d\n",obj.i);
    obj.f=20.0;
    printf("%f\n",obj.f);
    obj.d=22.22;
    printf("%f\n",obj.d);

    return 0;
}