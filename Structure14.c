#include<stdio.h>
struct Demo
{
    int i;
    char ch;
    float f;
};
int main()
{
    struct Demo obj;
    printf("%d\n",sizeof(obj));
    return 0;
}
