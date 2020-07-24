#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
/**
8.	Să se afişeze primul număr prim din fişieruldate.in care memorează numere întregi cu cel mult 4 cifre fiecare.
**/
int prim(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        return 1;
    return 0;
}
int main()
{int x,p;
while(f>>x)
   {
       if(prim(x)==0)
       {p=x;
       break;}
   }
   cout<<p;
    return 0;
}
