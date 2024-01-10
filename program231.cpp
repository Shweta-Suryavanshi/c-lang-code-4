#include<iostream>
using namespace std;

template <class T>
T Addition (T No1, T No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
}

int main()
{
    int Value1=10,Value2=11, iRet=0.0;

    iRet=Addition(Value1,Value2);

    cout<<"Addition is: "<<iRet<<"\n";

    return 0;
}