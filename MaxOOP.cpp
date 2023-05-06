#include<iostream>
using namespace std;

class Max
{
    public:
    int No1;
    int No2;
    Max(int A,int B)
    {
        No1=A;
        No2=B;
    }
    int Maximum()
    {
        if(No1>No2)
        {
            return No1;
        }
        else
        {
            return No2;
        }
    }
  
};

int main()
{
    int X;
    int Y;
    cout<<"Enter any number : ";
    cin>>X;
    cout<<"Enter any number : ";
    cin>>Y;
    Max obj(X,Y);
    cout<<"Maximum numbers between "<<X<<" & "<<Y<<" is "<<obj.Maximum();
    return 0;
}