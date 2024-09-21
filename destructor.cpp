#include<iostream>
#include<conio.h>
using namespace std;

class Exam
{
    int x;
    int y;
    public:
    ~Exam()
    {
        cout<<"destructor";
    }
    Exam(int p,int q)
    {
        x=p;
        y=q;
    }
    Exam(Exam &g)
    {
        g.x++;
        g.y++;
        //cout<<"reference vairable"<<endl;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Exam e1(1,2);
    Exam e2(e1);
    
    getch();
}