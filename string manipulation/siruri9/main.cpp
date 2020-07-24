#include <iostream>
#include <cstring>
using namespace std;
int v['z'+1];
int main()
{
    char s[256];
    int n,i;
  cin.getline(s, 51);

    n=strlen(s);

    for(i=0; i<=n; i++)
        if(v[s[i]]==0 && s[i]!=' ')
    {cout<<s[i]<<" "; v[s[i]]=1;}

    return 0;
}
