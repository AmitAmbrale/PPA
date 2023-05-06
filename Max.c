#include<stdio.h>
int main()
{
    int No1;
    int No2;
    printf("Enter number1:");
    scanf("%d",&No1);
    printf("Enter number2:");
    scanf("%d",&No2);
    if(No1>No2)
    {
        printf("Maximum number is %d",No1);
    }
    else
    {
        printf("Maxinum number is %d",No2);
    }
    return 0;
}