#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31];
int main()
{int i,j,m,n, ok=1;
    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
         f>>a[i][j];
    for(i=1;i<=m;i++)
        for(j=1;j<n;j++)
            for(int k=j+1; k<=n;k++)
            if(a[i][j]>a[i][k])
                ok=0;
if(ok==0)
 cout<< "nu";
 else cout<<"da";

    f.close();
    return 0;
}
