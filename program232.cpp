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
    int Value1=10,Value2=11, iRet=0;
    double dValue1=10.6,dValue2=11.5, dRet=0.0;
    float fValue1=9.0,fValue2=9.5,fRet=0.0f;

    iRet=Addition(Value1,Value2);
    cout<<"Addition is: "<<iRet<<"\n";

    dRet=Addition(dValue1,dValue2);
    cout<<"Addition is: "<<dRet<<"\n";

    fRet=Addition(fValue1,fValue2);
    cout<<"Addition is: "<<fRet<<"\n";

    return 0;
}