#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[21],a[21],b[21];
    int n,i;
    cin>>s;
    n=strlen(s);
    cout<<n/2<<" "<<n<<endl;
    if(n%2==1)
    {
        for(i=n/2+1; i<n; i++)
            cout<<s[i];
        cout<<s[n/2];
        for(i=0; i<n/2; i++)
            cout<<s[i];
    }
    else
    {
        for(i=n/2; i<n; i++)
            cout<<s[i];
        for(i=0; i<n/2; i++)
            cout<<s[i];
    }

    return 0;
}
