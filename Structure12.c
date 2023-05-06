#include<stdio.h>
struct Demo
{
    int i;
    struct Demo *ptr;
};
int main()
{
    struct Demo *head;
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.i=10;
    obj2.i=20;
    obj3.i=30;
    
    obj1.ptr=&obj2;
    obj2.ptr=&obj3;
    obj3.ptr=NULL;

    head=&obj1;
    printf("%d\n",obj1.i);//10
    printf("%d\n",obj2.i);//20
    printf("%d\n",obj3.i);//30
    printf("%d\n",&obj1);//100
    printf("%d\n",&obj2);//200
    printf("%d\n",&obj3);//300
    printf("%d\n",sizeof(obj1));//8
    printf("%d\n",sizeof(obj2));//8
    printf("%d\n",sizeof(obj2));//8

    printf("%d\n",head);//100
    printf("%d\n",*head);//10
    printf("%d\n",*head->ptr);//20
    printf("%d\n",*head->ptr->ptr);//30
    printf("%d\n",&head);//500
    printf("%d\n",sizeof(head));//100



    printf("%d\n",obj1.ptr);//200
    printf("%d\n",obj2.ptr);//300
    printf("%d\n",obj3.ptr);//0
    printf("%d\n",sizeof(obj1));//8
    printf("%d\n",sizeof(obj2));//8
    printf("%d\n",sizeof(obj3));//8
    printf("%d\n",&(obj1.ptr));//104
    printf("%d\n",&(obj2.ptr));//204
    printf("%d\n",&(obj3.ptr));//304
    
    return 0;
    
}