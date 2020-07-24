#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31], fr[901];
int main()
{int i,j,m,n,ok=1;

    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
         {f>>a[i][j];
         fr[a[i][j]]++;}


    return 0;
}
