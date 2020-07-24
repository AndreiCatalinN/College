#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[31][31];
int main()
{int i,j,m,n,si=0,sj=0,s=0;
    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
         {f>>a[i][j];
          s=s+a[i][j];}
      for(j=1;j<=n;j++)
            si=si+ a[n][j];
      for(i=1;i<=m;i++)
        sj=sj+a[i][m];
      for(i=1;i<=m;i++)
      a[n+1][i]=si;
      for(j=1;j<=n;j++)
      a[j][m+1]=sj;
      n++;m++; a[m][n]=s;
       for(i=1;i<=m;i++)
       {
        for(j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
         cout<<endl;}

         f.close();
    return 0;
}
