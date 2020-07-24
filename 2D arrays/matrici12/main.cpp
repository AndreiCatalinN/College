#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31],n,m;
int main()
{int i,j;
    f>>m>>n;
for(j=1;j<=n;j++)
    {int ok=0;
        for(i=1;i<=m;i++)
        {f>>a[j][i];
        if(a[j][i]==0)
            ok=1;}
        if(ok==1)
            cout<<j<<" ";}

f.close();
    return 0;
}
