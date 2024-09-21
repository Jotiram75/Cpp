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
friend int fun1(Example p1 ,int h ,int j);
};

int fun1(Example p1 ,int h ,int j)
{
   p1.x=h;
   p1.y=j;
   int k=p1.x+p1.y;
   return k;    
}

int main()
{
    Example e1;
    int h;
    h=fun1(e1,5,6);
    cout<<h;
    

    getch();
}
