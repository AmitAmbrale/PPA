#include<stdio.h>
int main()
{ 
int No=0;

printf("Enter any number:\n");
scanf("%d",&No);

if((No % 2) == 0)
{
printf("It is an even number..\n");
}
else
{
printf("It is a odd number..\n");
}   
return 0;
}