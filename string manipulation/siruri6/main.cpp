#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[51], a[1000]; int n,i,k=0,m=0;
  cin>>s;
    n=strlen(s);

    for(i=0; i<n; i=i+2)
    {
        k=s[i]-'0';
        for(j=0;j<=k;j++)
        {a[m]=s[i+1]; m++;}
    }
m=strlen(a);
for(i=0; i<=m; i=i+2)
    cout<<a[i];
    return 0;
}
