#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int p( int a[100],int n,int k)
{int i,j,s=0,aux;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]<=a[j])
            {aux=a[i];
            a[i]=a[j];
            a[j]=aux;}
    for(i=1;i<=k;i++)
            s=s+a[i];
return s;
}
int main()
{int n, k, a[100],i;
    f>>n>>k;
for(i=1;i<=n;i++)
    f>>a[i];
cout<<p(a,n,k)<<endl;

f.close();
    return 0;
}
