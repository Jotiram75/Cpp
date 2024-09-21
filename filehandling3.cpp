#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Demo.txt");
    char a;
    a=fin.get();
    while(!fin.eof())
    {
        cout<<a;
        a=fin.get();
    }
    
    fin.close();

    getch();
}