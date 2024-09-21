#include<iostream>
#include<conio.h>
using namespace std;

class Demo
{
    int x;
    int y;
    static int z;
    public:
    void setdata(int p,int q,int r)
    {
        x=p;
        y=q;
        z=r;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int Demo::z;
int main()
{
    Demo d1,d2,d3;
    d1.setdata(5,7,33);
    d2.setdata(13,34,1);
    d1.display();
    d2.display();
    getch();
}