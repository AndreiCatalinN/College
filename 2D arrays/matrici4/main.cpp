#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31];
int main()
{int i,j,m,n,v[31], min, max;
    f>>m>>n;
    for(i=1;i<=m;i++)
        {min=10000;
            for(j=1;j<=n;j++)
                {f>>a[i][j];
                if(a[i][j]<min)
                    min=a[i][j];
        v[i]=min;}}
     max=v[1];
     for(j=2;j<=m;j++)
        if(v[j]>max)
            max=v[j];

    cout<<max;




         f.close();
    return 0;
}
