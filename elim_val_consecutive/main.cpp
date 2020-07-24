#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{int i,n,v[13],p,j;
f>>n;
for(i=1;i<=n;i++)
f>>v[i];
for(p=1;p<=n;p++)
    if(v[p]==v[p+1])
       {
        for(i=p;i<n;i++)
            v[i]=v[i+1];
        n--;
        p--;
        }
for(i=1;i<=n;i++)
cout<<v[i]<<" ";
   f.close();
    return 0;
}
