#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
ifstream f("nr1.txt");
ifstream g("nr2.txt");
int main()
{
    int a, b;

    f>>a;
    g>>b;
    do
    {
        if(a<b)
        {
            if(a%5==0)
                cout<<a<<" ";
            f>>a;
        }
        else if(b<a)
        {
            if(b%5==0)
                cout<<b<<" ";
            g>>b;
        }

        if(a==b)
            f>>a;
    }
    while(f.eof()==0 && g.eof()==0);


    if(f.eof()==0)
        do
        {
            if(a%5==0)
                cout<<a<<" ";
            f>>a;
        }
        while(f.eof()==0);

    if(g.eof()==0)
        do
        {
            if(b%5==0)
                cout<<b<<" ";
            g>>b;
        }
        while(g.eof()==0);
    f.close();
    g.close();
    return 0;
}
