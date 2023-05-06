//Pointer 
#include<stdio.h>
int main()
{
    int No=11;
    int *iptr=&No;
    printf("%d\n",No);//11
    printf("%d\n",&No);//100
    printf("%d\n",&iptr);//200
    printf("%d\n",*iptr);//11
    printf("%d\n",sizeof(iptr));//8
    printf("%d\n",sizeof(*iptr));//4



    char ch='A';
    char *cptr=&ch;
    printf("%c\n",ch);//A
    printf("%d\n",&ch);//300
    printf("%d\n",&cptr);//400
    printf("%c\n",*cptr);//A
    printf("%d\n",sizeof(cptr));//8
    printf("%d\n",sizeof(*cptr));//1



    double d=89.89;
    double *dptr=&d;
    printf("%f\n",d);//89.89
    printf("%d\n",&d);//500
    printf("%d\n",&dptr);//600
    printf("%f\n",*dptr);//89.89
    printf("%d\n",sizeof(d));//8
    printf("%d\n",sizeof(*dptr));//8


    return 0;
}