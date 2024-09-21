#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("demo.txt");
    fout<<"Hello Jotiram";
    fout.close();

    getch();
}