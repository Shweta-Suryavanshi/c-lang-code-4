#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[],int length)
{
    T sum=0;
    int icnt=0;

    for(icnt=0;icnt<length;icnt++)
    {
        sum=sum+Arr[icnt];
    }
    return sum;
}

int main()
{ 
    int size=0;
    int *ptr=NULL;

    cout<<"Enter number of elements"<<"\n";
    cin>>size;

    ptr=new int[size];

    cout<<"Enter the elements: "<<"\n";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }

    int Ret=Addition(ptr,size);
    cout<<"Addition of all elements is: "<<Ret<<"\n";

    return 0;
}