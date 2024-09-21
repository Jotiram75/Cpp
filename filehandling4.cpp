#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Demo.txt",ios::app | ios::ate);
    fout<<" Nevare";
    cout<<fout.tellp();
    
    fout.close();

    getch();
}