#include<iostream>
#include<conio.h>
using namespace std;


class Demo
{
    int x,y;
    public:
    void fun1()
    {
        cout<<"// function overrinding ";
    }
    
};

class Demo1 : public Demo
{
    public:
    void fun1()    // function overrinding
    {
        cout<<"// function overrinding\n";
    }
    void fun1(int p) // function overloading  #function hidding
    {
        cout<<"// function overloading  #function hidding ";
    }
};
int main()
{
    Demo d1;
    Demo1 d2;
    d2.fun1();
    d2.fun1(5);

    getch();
}