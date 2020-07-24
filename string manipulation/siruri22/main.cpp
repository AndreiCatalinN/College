#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50],c;
    cin>>s;
    int n,i;
    n=strlen(s);
    for(i=1; i<=n; i++)
    {
        c=s[i];
        s[i]=0;
        cout<<s<<endl;
        s[i]=c;
    }
    return 0;
}
