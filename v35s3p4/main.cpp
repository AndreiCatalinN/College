#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int sum(int x)
{int s=0;
    int i;
    if(x==1 || x==2)
        return 0;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
         s=s +i;
 return s;
}
int main()
{int n, aux, i, j, v[100], x[100];
    f>>n;
for(i=1;i<=n;i++)
    f>>v[i];
for(i=1;i<=n;i++)
    x[i]=sum(v[i]);
for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
     if(x[i]>x[j])
        {aux=x[i];
        x[i]=x[j];
        x[j]=aux;}
for(i=1;i<=n;i++)
    cout<<x[i]<<" ";
    f.close();
    return 0;
}
