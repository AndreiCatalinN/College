#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    int n,i;

  cin.getline(s,101);

    n=strlen(s);

    for(i=0; i<=n; i++)
        {if(isupper(s[i])!=0)
            s[i]=tolower(s[i]);
            else
                if(islower(s[i])!=0)
                    s[i]=toupper(s[i]);}
    for(i=0; i<=n; i++)
        cout<<s[i];
    return 0;
}
