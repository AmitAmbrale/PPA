#include<stdio.h>
struct Demo
{
  int i;
  float j;
}obj;
struct Hello
{
    int no;
    struct Demo obj;
}obj2;

int main()
{
    obj.i=1;
    obj.j=2;


    obj2.no=10;
    obj2.obj.i=20;
    obj2.obj.j=20;
     
    printf("%d\n",obj.i);
    printf("%f\n",obj.j);

    
    printf("%d\n",obj2.no);
    printf("%d\n",obj2.obj.i);
    printf("%f\n",obj2.obj.j);

    printf("%d",sizeof(obj2));
}