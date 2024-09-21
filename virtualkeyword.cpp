#include<iostream>
#include<conio.h>
using namespace std;

class Demo
{
    int x,y;
    public:
    virtual void fun1()
    {
        cout<<"Parent function";
    }
};
class Demo1 : public Demo
{
    public:
    void fun1()
    {
        cout<<"child function";
    }
};
int main()
{
    Demo *d1;
    Demo1 d2;
    d1= &d2;
    d1->fun1();


    getch();
}