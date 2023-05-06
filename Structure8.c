#include<stdio.h>
struct Hello
{
    int no;
    double d;
    float x;

};
struct Demo
{
  int i;
  float f;
  struct Hello obj1;
};
int main()
{
    struct Demo obj2;
    struct Hello obj1;

    printf("%d",sizeof(obj2));//32[padding]  //24[without padding]
}