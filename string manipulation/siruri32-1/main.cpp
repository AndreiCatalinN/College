#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   char s[21];

   int i,j,n,aux;
   cin>>s;
   n=strlen(s);
   for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
        if((int)s[i]>(int)s[j])
   {
       aux=s[i];
       s[i]=s[j];
       s[j]=aux;
   }
   for(i=0;i<n;i++)
   cout<<s[i];
    return 0;
}
