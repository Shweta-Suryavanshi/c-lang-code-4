#include<iostream>
using namespace std;

template <class T>
void Swap(T &No1,T &No2)
{
    T Temp;
    Temp=No1;
    No1=No2;
    No2=Temp;
}

int main()
{
    int Value1=10;
    int Value2=11;

    float fValue1=10.9;
    float fValue2=11.5;
    
    cout<<"Value of value1: "<<Value1<<"\n";
    cout<<"Value of value2: "<<Value2<<"\n";

    cout<<"Value of value1: "<<fValue1<<"\n";
    cout<<"Value of value2: "<<fValue2<<"\n";

    Swap(Value1,Value2);

    cout<<"Value of value1: "<<Value1<<"\n";
    cout<<"Value of value2: "<<Value2<<"\n";

    cout<<"Value of value1: "<<fValue1<<"\n";
    cout<<"Value of value2: "<<fValue2<<"\n";

    return 0;
    
}