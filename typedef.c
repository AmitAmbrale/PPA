#include<stdio.h>
//typedef Old_name New_name;
typedef const int CINT;
typedef unsigned int UNIT;
int main()
{
    const int no=11;
    CINT i=11;
    
    unsigned int X=21;
    UNIT y=21;

    printf("%d\n",no);
    printf("%d\n",i);
    printf("%d\n",y);
    printf("%d\n",X);


    return 0;
}