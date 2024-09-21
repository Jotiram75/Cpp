#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int x,y;
    public:
    A()
    {
        cout<<"Parent constructor\n";
    }
    virtual void fun()=0;
};
class B : public A
{
    public:
    B()
    {
        cout<<"child constructor";
    }
    void fun()
    {

    }
};
int main()
{
    B b1;

    getch();
}