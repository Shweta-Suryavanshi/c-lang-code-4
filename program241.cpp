#include<iostream>
using namespace std;

class array
{
    public:
    int *Arr;
    int size;

    array(int length)
    {
        size=length;
        Arr=new int[size];
    }

    ~array()
    {
        delete []Arr;
    }

    void Accept()
    {
        cout<<"Enter the elements: "<<"\n";
        int icnt=0;

        for(icnt=0;icnt<size;icnt++)
        {
            cin>>Arr[icnt];
        }
    }

    void Display()
    {
        cout<<"Elements of the array are: "<<"\n";
        int icnt=0;

        for(icnt=0;icnt<size;icnt++)
        {
            cout<<Arr[icnt]<<"\t";
        }
    }
};
int main()
{ 
    array obj(5);
    
    obj.Accept();
    obj.Display();

    return 0;
}