#include<iostream>
#include<conio.h>
using namespace std;

class BinaryO
{
   int x;
   int y;
   public :
    void setdata(int p,int q)
    {
        x = p;
        y = q;
    }
    BinaryO operator +(BinaryO g1)
    {
        BinaryO h;
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
    BinaryO b1,b2,b3;
    b1.setdata(10,20);
    b2.setdata(10,20);
    b3=b1+(b2);
    b3.display();

    getch();
}