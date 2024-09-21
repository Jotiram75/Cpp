#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int s;
    public:
    A(int g)
    {
        s=g;
        cout<<"Parent Contructor\n";
    }
    ~A()
    {
       cout<<"Parent Destructor"; 
    }
};
class B: public A
{
    public:
    B(int a):A(a)
    {
        cout<<"Child constructor\n";
    }
    ~B()
    {
        cout<<"Child Destructor\t";
    }
};
int main()
{
    B b1(6);
    
    getch();
}