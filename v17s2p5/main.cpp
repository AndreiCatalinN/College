#include <iostream>

using namespace std;

int main()
{
    int n,a[20][20],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        a[i][n-i+1]=n;

    for(i=n-1;i>=1;i--)
        for(j=1;j<n-i+1;j++)
         a[i][j]=a[i][j+1]-1;

    for(i=1;i<=n;i++)
        for(j=n-i+2;j<=n;j++)
         a[i][j+1]=a[i][j]+1;

    for(i=1;i<=n;i++)
        {for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
   cout<<endl;}
    return 0;
}
