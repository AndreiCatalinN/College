#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");

int main()
{
    int x,v[11],i=0,c=0;
    for(x=0;x<=9;x++)
        v[x]=0;
while(f>>x)
{
       while(x!=0)
    {
        v[x%10]++;
        x=x/10;
    }}
for(i=9;i>=0;i--)
    while(v[i]!=0)
        {c=i;
        g<<c;
        v[i]--;}

    f.close();
    g.close();
    return 0;
}
