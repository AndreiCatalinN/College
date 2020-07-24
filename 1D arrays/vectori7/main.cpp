#include <iostream>

using namespace std;

int main()
{
   int n,i,v[110],aux;
   cin>>n;
   aux=n;
   i=1;
   v[1]=1; v[2]=1;
   while(n!=0)
    {
        v[i+2]=v[i+1]+v[i];
        i++; n--;
    }
    n=aux;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
