#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31],n,m;
int main()
{int i,j,p,q,aux;
    f>>m>>n>>p>>q;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
         f>>a[i][j];
    for(i=1;i<=m;i++)
        {aux=a[i][p];
        a[i][p]=a[i][q];
        a[i][q]=aux;}
    for(i=1;i<=m;i++)
        {for(j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
        cout<<endl;}
         f.close();
    return 0;
}
