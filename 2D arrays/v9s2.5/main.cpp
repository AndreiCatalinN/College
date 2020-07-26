#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k=0, a[10][10];
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            while(k<=9)
            {
                if(k<=9)
                {
                    a[i][j]=k;
                    k++;
                }
                else
                    k=0;
            }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
