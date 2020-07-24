#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   char s[256],c;
   int i,poz;
   cin.get(s,256);
   int n=strlen(s);
   for(i=0;i<=n;i++)
    if(strchr("aeiou",s[i])==0)
        poz=i;
   strcpy(s+poz, s+poz+1);
   cout<<s;
    return 0;
}
