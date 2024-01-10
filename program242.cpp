#include<iostream>
using namespace std;

class array
{
    public:
    int *Arr;
    int size;

    array(int length);
    ~array();
    void Accept();
    void Display();
    int Addition();
};

array::array(int length)
    {
        size=length;
        Arr=new int[size];
    }

array::~array()
    {
        delete []Arr;
    }

void array:: Accept()
    {
        cout<<"Enter the elements: "<<"\n";
        int icnt=0;

        for(icnt=0;icnt<size;icnt++)
        {
            cin>>Arr[icnt];
        }
    }

void array:: Display()
    {
        cout<<"Elements of the array are: "<<"\n";
        int icnt=0;

        for(icnt=0;icnt<size;icnt++)
        {
            cout<<Arr[icnt]<<"\t";
        }
        cout<<"\n";
    }

int array::Addition()
{
    int sum=0;
    int icnt=0;

    for(icnt=0;icnt<size;icnt++)
    {
        sum=sum+Arr[icnt];
    }
    return sum;
}

int main()
{ 
    array obj(5);
    
    obj.Accept();
    obj.Display();
    int Ret=obj.Addition();
    cout<<"Addition is: "<<Ret<<"\n";

    return 0;
}