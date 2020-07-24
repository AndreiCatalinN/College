#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    int n,i;
  cin.getline(s,256);
  n=strlen(s);
        s[0]=toupper(s[0]);
        for(i=0;i<=n;i++)
            {if(isalpha(s[i])!=0 && (s[i+1]==' ' || s[i+1]==0))
                 s[i]=toupper(s[i]);

            if(isalpha(s[i+1])!=0 && s[i]==' ')
                s[i+1]=toupper(s[i+1]);}
    for(i=0;i<=n;i++)
        cout<<s[i];
    return 0;
}
