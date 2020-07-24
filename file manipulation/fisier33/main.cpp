#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");
int par(int x)
{int m=0,p=1;
while(x!=0)
{
    if(x%10%2==1)
        {m=m+x%10*p;
        p=p*10;}
        x=x/10;

}
return m;
}
int main()
{int x;


    while(f>>x)
{if(par(x)!=0)
      g<<par(x)<<" ";
}
f.close();
g.close();
    return 0;
}
