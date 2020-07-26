#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{int n, i, j,v[1000],g=0,k=0,h=0,l=0;
f>>n;
for(i=1;i<=n;i++)
    f>>v[i];
for(i=1;i<=n;i++)
 for(j=i+1;j<=n;j++)
   {if(v[i]%2==0 &&v[j]%2==0)
    {g++;
     if(v[i]<v[j])
       k++;}
    if(v[i]%2==1 &&v[j]%2==1)
       {
           h++;
           if(v[i]>v[j])
            l++;
       }
       }


if(g==k && l==h)
        cout<<"Da.";
else cout<<"Nu.";

   f.close();
    return 0;
}
