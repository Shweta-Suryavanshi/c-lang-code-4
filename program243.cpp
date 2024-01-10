//convert in generic
#include<iostream>
using namespace std;
template<class T>
class array
{
    public:
    T *Arr;
    int size;

    array(int length);
    ~array();
    void Accept();
    void Display();
    T Addition();
};

template<class T>
array<T>::array(int length)
    {
        size=length;
        Arr=new int[size];
    }

template<class T>
array<T>::~array()
    {
        delete []Arr;
    }

template<class T>
void array<T>:: Accept()
    {
        cout<<"Enter the elements: "<<"\n";
        int icnt=0;

        for(icnt=0;icnt<size;icnt++)
        {
            cin>>Arr[icnt];
        }
    }

template<class T>
void array<T>:: Display()
    {
        cout<<"Elements of the array are: "<<"\n";
        int icnt=0;

        for(icnt=0;icnt<size;icnt++)
        {
            cout<<Arr[icnt]<<"\t";
        }
        cout<<"\n";
    }

template<class T>
T array<T>::Addition()
{
    T sum=0;
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        sum=sum+Arr[icnt];
    }
    return sum;
}

int main()
{ 
    array<int> obj(5);
    
    obj.Accept();
    obj.Display();
    int Ret=obj.Addition();
    cout<<"Addition is: "<<Ret<<"\n";

    return 0;
}