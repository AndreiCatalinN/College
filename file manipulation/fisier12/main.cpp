#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

/**12.	Să se afişeze primul şi ultimul număr prim din fişierul date.in care memorează numere întregi cu cel mult 4 cifre fiecare.**/
int prim(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        return 1;
    return 0;
}

int main()
{int x,i,n=0, v[100];

while(f>>x)
{
    if(prim(x)==0)
      {
        n++;
        v[n]=x;}
}
cout<<v[1]<<endl<<v[n];

    return 0;
}
