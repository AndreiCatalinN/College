#include <iostream>
#include <cstring>
using namespace std;
 int adauga(char s[21], int &n, int p, char x )
 {  n++; int i;
     for(i=n;i>=p+1;i--)
        s[i]=s[i-1];
     s[p]=toupper(x);

 }
int main()
{
    char s[21];
    int n,i;

  cin>>s;

    n=strlen(s);

    for(i=0; i<=n; i++)
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')

            adauga(s,n,i+1,s[i]);

     for(i=0; i<=n; i++)
        cout<<s[i];
    return 0;
}
