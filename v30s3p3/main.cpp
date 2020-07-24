#include <iostream>
#include <fstream>

using namespace std;
ifstream f("date.in");
int suma( int v[100],int n,int i,int j)
{int s=0,k;
    for(k=1;k<i;k++)
        s=s+v[k];
    for(k=j+1;k<=n;k++)
        s=s+v[k];
    return s;
}
int main()
{ int n, i, v[100];

    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    cout<<suma(v,n,3, 5)<<" ";
        f.close();
    return 0;
}
