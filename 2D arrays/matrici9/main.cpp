#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[26][26],n,m;
int main()
{int i,j, x;
    f>>m>>n>>x;
for(i=1;i<=m;i++)
    {int ok=0;
        for(j=1;j<=n;j++)
        {f>>a[i][j];
        if(a[i][j]==x)
            ok=1;}
        if(ok==1)
            cout<<i<<" ";}

f.close();
    return 0;
}
