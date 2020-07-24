#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int prim(int y)
{int i;
    if(y==1)
        return 1;
    for(i=2;i<=y/2;i++)
        if(y%i==0)
         return 0;
    return 1;}
int nrdiv(int x)
{ int i, k=0;
    if(x==1)
        return 0;
    for(i=2;i<=x/2;i++)
        if(x%i==0 && prim(i)==1)
         k++;
    return k;
}


int main()
{int n, i, v[1000],p=0,u;
  f>>n;
  for(i=1;i<=n;i++)
    f>>v[i];
 cout<<prim(5)<<endl;
    cout<<nrdiv(10)<<endl;
  for(i=1;i<=n;i++)
  {
      if(nrdiv(v[i])%2==0 && nrdiv(v[i])>0 )
      {u=v[i];
        if(p==0)
               p=u;}

  }
  cout<<p<<" "<<u;
 f.close();
    return 0;
}
