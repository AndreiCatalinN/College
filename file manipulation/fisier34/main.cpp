#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");

int suma(int x)
{int s=0;
    while(x!=0)
    {
        s=s+x%10;
        x=x/10;
    }
    return s;
}
int main()
{
    int x,a,s;
    f>>x;
    a=x;
    s=suma(x);

    while(f>>x)
    {
        if(s<suma(x))
            {s=suma(x); a=x;}
      else if(suma(x)==s && x<a)
                a=x;

    }
    cout<<a;
    f.close();

    return 0;
}
