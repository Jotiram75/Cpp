#include<iostream>
#include<conio.h>
using namespace std;

class Demo
{
    int x,y;
    public:
    void setData(int p, int q)
    {
        x=p;
        y=q;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;

    }
    friend Demo operator +(Demo f1,Demo f2);
};

Demo operator +(Demo f1,Demo f2)
{
    Demo g1;
    g1.x=f1.x+f2.x;
    g1.y=f1.y+f2.y;
    return g1;
}
int main()
{
    Demo d1,d2,d3;
    d1.setData(5,9);
    d2.setData(1,4);
    d3=d1+d2;
    d3.display();

    getch();
}