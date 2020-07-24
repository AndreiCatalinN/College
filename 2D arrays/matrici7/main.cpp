#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31],v[31];
int main()
{
    int i,j,m,n;
    f>>m>>n;

    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            f>>a[i][j];
            v[i]+=a[i][j];
        }

    for(i=1;i<m;i++)


    f.close();
    return 0;
}
