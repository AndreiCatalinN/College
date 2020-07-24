#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.txt");
int max(int x[10], int n)
{
    if((x[1]-x[2])>0)
        return x[1];
    else return x[n];
}
int main()
{int x[100],i,n,j,ok=0, maxi,v[10][10],k,a;
    f>>n;
for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
     f>>v[i][j];
maxi=v[1][1];
a=v[1][1];
for(i=1;i<=n;i++)
     {for(j=2;j<n;j++)
      if(v[i][j]==(v[i][j-1]+v[i][j+1])/2)
        ok=1;

       if(ok==1)
       {for(k=1;k<=n;k++)
          x[k]=v[i][k];
         maxi=max(x,n);
        }
        if(a<maxi)
            a=maxi;
      }
      cout<<a;
    f.close();

    return 0;
}
