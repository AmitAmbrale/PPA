//void pointer
#include<stdio.h>
int main()
{

    void *vp;

    char ch='A';
    char *cp=&ch;
    vp=&ch;
    printf("%c\n",*(char *)vp);

    int i=11;
    int *ip=&i;
    vp=&i;
    printf("%d\n",*(int *)vp);

    float f=3.14;
    float *fp=&f;
    vp=&f;
    printf("%f\n",*(float *)vp);

    double d=9.89;
    double *dp=&d;
    vp=&d;
    printf("%f\n",*(double *)vp);

    return 0;
}