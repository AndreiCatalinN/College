#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[51];
    int n,i;

    cin>>s;

    n=strlen(s);

    for(i=0; i<=n; i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            cout<<s[i]<<'p'<<s[i];
        else
            cout<<s[i];

    return 0;
}
