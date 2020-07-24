#include <iostream>

using namespace std;
int suma(int n, int v[101])
{
    int j;
     int s=0;
    for(j=n;j>=1;j--)
    {

        s=s+v[j];
    }
return s;}
int main()
{
    int n,i,v[101];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=n;i>=1;i--)
        cout<< suma(i,v)<<endl;
    return 0;
}
