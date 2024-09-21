#include<iostream>
#include<conio.h>
using namespace std;

class UnaryOp
{
    int x; int y;
    public:
    void setdata(int p,int q)
    {
        x=p;
        y=q;
    }
    UnaryOp operator ++()
    {
        UnaryOp z1;
        z1.x=++x;
        z1.y=++y;
        return z1;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }

};
int main()
{
    UnaryOp u1,u2;
    u1.setdata(5,7);
    u2=++u1;
    u2.display();
    getch();
}