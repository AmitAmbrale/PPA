#include<stdio.h>
#pragma pack(1)
struct Demo
{
  int no;
  double d;
}dobj;
int main()
{
   printf("%d",sizeof(dobj));    
 
}