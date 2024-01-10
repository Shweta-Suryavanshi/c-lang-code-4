#include<iostream>
using namespace std;

void Swap(int &No1,int &No2)
{
    int Temp;
    Temp=No1;
    No1=No2;
    No2=Temp;
}

int main()
{
    int Value1=10;
    int Value2=11;
    
    cout<<"Value of value1: "<<Value1<<"\n";
    cout<<"Value of value2: "<<Value2<<"\n";

    Swap(Value1,Value2);

    cout<<"Value of value1: "<<Value1<<"\n";
    cout<<"Value of value2: "<<Value2<<"\n";

    return 0;
    
}