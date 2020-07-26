#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.txt");
int main()
{int i,n,v[100000],aux,j;
f>>n;
for(i=1;i<=n;i++)
    f>>v[i];
for(i=1;i<n;i++)
    for(j=i+1;j<=n;j++)
        if(v[i]>v[j])
            {aux=v[i];
        v[i]=v[j];
        v[j]=aux;}
    for(i=1;i<=n;i++)
    cout<<v[i]<<" ";
    f.close();
    return 0;
}
