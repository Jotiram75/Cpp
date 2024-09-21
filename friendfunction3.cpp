#include<iostream>
#include<conio.h>
using namespace std;
class Example2;
class Example1
{
    int x;
    public:
    f1()
    {

    }
    friend void fun1(Example1 p1,Example2 p2);
};
class Example2
{
    int y;
    public:
    f2()
    {

    }
    friend void fun1(Example1 p1,Example2 p2);
};

void fun1(Example1 p1,Example2 p2)
{
    p1.x=7;
    p2.y=6;
    cout<<p1.x+p2.y;

}
int main()
{
    Example1 e1;
    Example2 e2;
    fun1(e1,e2);
    getch();
}