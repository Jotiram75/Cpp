#include<iostream>
#include<conio.h>
using namespace std;

class Exam
{
    int x;
    int y;
    public:
    Exam()
    {
        cout<<"Default Constructor"<<endl;
    }
    Exam(int p,int q)
    {
        x=p;
        y=q;
        cout<<"Parameterized constructor"<<endl;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Exam e1,e2(2,3);
    e2.display();
    getch();
}