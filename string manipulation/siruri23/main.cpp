#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50],c;
    cin>>s;
    int n,i;
    n=strlen(s);
    for(i=n; i>0; i--)
    {
        s[i]=0;
        cout<<s<<endl;
    }
    return 0;
}
