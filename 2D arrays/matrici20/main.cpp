#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31],n,m;
void citire(int a[31][31])
{f>>m>>n;
    int i,j;
    for (i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
}

int main()
{int i,j,k=0;
    citire(a);
    for(i=1;i<=m;i+=2)
        {for(j=1;j<=n;j++)
            a[i][j]=a[i+1][j];
            k++;}
     for (i=1;i<=m-k;i++)
        {for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;}
    f.close();
    return 0;
}
