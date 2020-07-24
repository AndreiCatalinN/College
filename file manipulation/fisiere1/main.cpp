#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream f("date.in");
int prim(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
        if(a%i==0)
         return 1;
    return 0;
}
int main()
{int n, max=0,min=9999,pmax=0,primax=0, i,x, ok=0, k=0, ko=0;
    f>>n;
for(i=1;i<=n;i++)
   {
    f>>x;
    if(max<x)
        max=x;
    if(min>x)
        min=x;
    if (sqrt(x)==(int)sqrt(x))
            {if(pmax< x)
             {pmax=x;
             ok=1;}}
        if(max==x)
         k++;
        if(prim(x)==0)
          if(primax<x)
           {primax=x;
            ko=1;}
        }

    cout<<"Maximul este: "<<max<<" si apare de "<<k<<" ori."<<endl;
    cout<<"Minimul este: "<<min<<endl;
    if(ok==1)
        cout<<"Patrat perfect maxim: "<<pmax;
    else
        cout<<"Nu exista.";
cout<<endl;
    if(ko==1)
        cout<<"Numarul prim maxim: "<<primax;
    else
        cout<<"Nu exista.";
    f.close();
    return 0;
}
