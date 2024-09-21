#include<iostream>
#include<conio.h>
using namespace std;

template<typename P, typename Q>
class Demo
{
    P x;
    Q y;
    public:
    void f1(P a,Q b)
    {
        Q c=a+b;
        cout<<c;
    }
};
int main()
{
    Demo<int,double> d1;
    d1.f1(4.5,2.7);
    getch();


}