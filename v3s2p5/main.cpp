#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{
    int i,j,n,a[25][25];
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {
        a[i][j]=n-j+1;
        a[i][i]=0;
    }
    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;}
    f.close();
    return 0;
}
