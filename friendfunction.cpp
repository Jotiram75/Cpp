#include<iostream>
#include<conio.h>
using namespace std;

class Example
{
    int x,y;
    public:
    void fun()
    {

    }
friend void fun1();
};

void fun1()
{
    Example e1;
    e1.x=5;
    e1.y=3;    
    cout << e1.x << " " << e1.y << endl;    
}

int main()
{
    fun1();
    

    getch();
}
