#include<stdio.h>
int main()
{
int Arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
// Arr is two dimentional array
// which contains 3 one dimentonal array
// each one dimentional array contains 4 elements
// and each element is of type integer  

Arr[0][0] = 1;
Arr[0][1] = 2;
Arr[0][2] = 3;
Arr[0][3] = 4;

Arr[1][0] = 5;
Arr[1][1] = 6;
Arr[1][2] = 7;
Arr[1][3] = 8;

Arr[2][0] = 9;
Arr[2][1] = 10;
Arr[2][2] = 11;
Arr[2][3] = 12;

printf("%d\n",Arr[0][0]);
printf("%d\n",Arr[0][1]);
printf("%d\n",Arr[0][2]);
printf("%d\n",Arr[0][3]);
printf("%d\n",Arr[1][0]);
printf("%d\n",Arr[1][1]);
printf("%d\n",Arr[1][2]);
printf("%d\n",Arr[1][3]);
printf("%d\n",Arr[2][0]);
printf("%d\n",Arr[2][1]);
printf("%d\n",Arr[2][2]);
printf("%d\n",Arr[2][3]);

return 0;

}