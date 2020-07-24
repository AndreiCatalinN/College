#include <iostream>
#include <fstream>
using namespace std;

int main()
{ifstream f("date.in");
     int n, v[101],i,j, aux;
    f>>n;
    for (i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
        if(i<=n/2)
         if(v[i]>v[j])
         {aux=v[i];
            v[i]=v[j];
            v[j]=aux;}
        if(i>n/2)
            if(v[i]<v[j])
        {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
         for(i=1;i<=n;i++)
            cout<<v[i]<<" ";
f.close();
    return 0;
}
