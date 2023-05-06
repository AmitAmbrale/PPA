//Pointer to pointer
#include<stdio.h>
int main()
{
    int No=11;
    int *p=&No;
    int **q=&p;
    int ***r=&q;
    int ****a=&r;
    int *****b=&a;
    int ******c=&b;
    printf("%d\n",sizeof(No));//4 bytes
    printf("%d\n",&No);//100
    printf("%d\n",&a);//500
    printf("%d\n",sizeof(r));//8 bytes
    printf("%d\n",sizeof(c));// 8 bytes
    printf("%d\n",sizeof(*p));// 4 bytes
    printf("%d\n",&q);//300
    printf("%d\n",&c);//700
    printf("%d\n",*p);//11
    printf("%d\n",**q);//11
    printf("%d\n",****b);//100
    printf("%d\n",******c);//11
    printf("%d\n",**c);//400
    return 0;
}