#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31],n,m;
int main()
{int i,j, k,aux;
    f>>m>>n>>k;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
         f>>a[i][j];


for(j=1;j<n;j++)
    for(int l=j+1;l<n;l++)
     if(a[k][j]>a[k][l])
     {aux=a[j][i];
        a[j][i]=a[l][i];
        a[l][i]=aux;}



      for(i=1;i<=m;i++)
        {for(j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
         cout<<endl;}
    f.close();
    return 0;
}
