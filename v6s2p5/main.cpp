#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   char s[256];
   int i;
   cin.get(s,256);
   int n=strlen(s);
   s[0]=toupper(s[0]);
   for(i=1;i<=n;i++)
    if(s[i]==' ' && isalpha(s[i+1])!=0)
     s[i+1]=toupper(s[i+1]);

cout<<s;


    return 0;
}
