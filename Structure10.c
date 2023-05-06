#include<stdio.h>
struct Demo
{
  int i;
  float j;
  struct Hello
  {
   int no;
   float x;
  }obj2;
}obj1;
int main()
{
  obj1.i=10;
  obj1.j=20.0;
  obj1.obj2.no=30;
  obj1.obj2.x=40.0;
   
  printf("%d\n",obj1.i);
  printf("%f\n",obj1.j);
  printf("%d\n",obj1.obj2.no);
  printf("%f\n",obj1.obj2.x);
  
  printf("%d\n",&obj1);
  printf("%d\n",&obj1.obj2);


  return 0;

}