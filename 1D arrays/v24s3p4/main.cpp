#include <iostream>
#include <fstream>

using namespace std;
ifstream f("bac.txt");

int main()
{
    int n,v[30000],i, a,b,g=0;
    int st,dr,m,min;
    f>>n;
    for(i=1;i<=n;i++)
    f>>v[i];
    f>>a>>b;
    st=1;dr=n;min=v[1];
    while(st<=dr && g!=1)
    {
        m=(st+dr)/2;
        if(v[m]>=a && v[m]<=b)
            {min=v[m];
            g=1;}
            else if(v[m]<a)
                    st=st+1;
                    else dr=dr-1;
    }
    if(g==0)
        cout<<"Nu exista.";
    else cout<<min;
  f.close();
    return 0;
}
