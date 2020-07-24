#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{int n,i,j,s;
float v[50];
   f>>n;
   for(i=1;i<=n;i++)
     f>>v[i];
   for(i=1;i<=n;i++)
   {s=0;
    if(i==1)
     {for(j=i+1;j<=n;j++)
         s=s+v[j];}
    if(i>1)
       {
        for(j=1;j<i;j++)
         s=s+v[j];
        for(j=i+1;j<=n;j++)
         s=s+v[j];}
        else {if( i==n)
            for(j=1;j<n;j++)
             s=s+v[j];}
        s=s/(float)(n-1);
     if(v[i]==s)
        cout<<v[i]<<" ";

   }

   f.close();
    return 0;
}
