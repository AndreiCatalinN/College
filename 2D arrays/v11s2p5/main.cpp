#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int v[10];
int main()
{
    int v[10];

    int i,m,j,n,a[10][10],max =0;
    for(i=0; i<=10; i++)
        v[i]=10000;
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
        {
            f>>a[i][j];
            if(v[j]>a[i][j])
                v[j]=a[i][j];
        }
    for(j=1; j<=n; j++)
        if(max<v[j])
            max=v[j];
    cout<<max;
    f.close();
    return 0;
}
