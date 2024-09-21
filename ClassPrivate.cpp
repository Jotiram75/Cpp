#include<iostream>
#include<conio.h>
using namespace std;

class Example
{
    int x;
    int y;
    public:
    void setdata(int p,int q)
    {
        x=p;
        y=q;
        
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};

int main()
{
    Example e1,e2,e3;
    e1.setdata(3,4);
    e2.setdata(12,34);
    e3.setdata(65,47);
    e1.display();
    e2.display();
    e3.display();
    
    getch();
}