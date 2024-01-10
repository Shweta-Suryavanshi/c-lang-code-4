#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public:
    T No1;
    T No2;

    Arithmatic(T A,T B);
    T Addition();
    T Multiplication();
};

template <class T>
Arithmatic<T>::Arithmatic(T A,T B)
    {
        this->No1=A;
        this->No2=B;
    }

template <class T>
T Arithmatic<T>:: Addition()
    {
        T Ans;
        Ans=No1+No2;
        return Ans;
    }

template<class T>
T Arithmatic<T>::Multiplication()
{
    T Ans;
    Ans=No1*No2;
    return Ans;
}

int main()
{
    Arithmatic<int> obj1(10,11);
    int Ret=0;

    Ret=obj1.Addition();
    cout<<"Addition is: "<<Ret<<"\n";

    Ret=obj1.Multiplication();
    cout<<"Multiplication is: "<<Ret<<"\n";

    Arithmatic<float> obj2(10.4,11.3);
    float fRet=0.0;

    fRet=obj2.Addition();
    cout<<"Addition is: "<<fRet<<"\n";

    fRet=obj2.Multiplication();
    cout<<"Multiplication is: "<<fRet<<"\n";

    return 0;
}