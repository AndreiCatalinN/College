#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{ int a[31][31],n,m,k,i,j;
f>>m>>n>>k;
for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
    f>>a[i][j];
for(i=1;i<=m;i++)
    for(j=k;j<n;j++)
    a[i][j]=a[i][j+1];
n--;
for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;}
    f.close();
    return 0;
}
