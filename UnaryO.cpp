#include<iostream>
#include<conio.h>
using namespace std;


class UnaryO
{
    int x,y;
    public:
    void setdata(int p,int q)
    {
        x=p;
        y=q;
    }
    UnaryO operator - ()
    {
        UnaryO z1;
        z1.x=-x;
        z1.y=-y;
        return z1;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }

};
int main()
{ 
    UnaryO u1,u2;
    u1.setdata(4,5);
    u2=-u1;
    u2.display();

    getch();
}