#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
   int x;
   int y;
   public :
    void setdata(int p,int q)
    {
        x = p;
        y = q;
    }
    Complex add(Complex g1)
    {
        Complex h;
        h.x=x+g1.x;
        h.y=y+g1.y;

        return h;
    }

    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(11,27);
    c2.setdata(12,18);
    c3=c1.add(c2);
    c3.display();

    getch();
}