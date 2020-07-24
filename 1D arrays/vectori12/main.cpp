#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{int n,v[101],aux, i,j,k=3;
    f>>n;
for(i=1;i<=n;i++)
    f>>v[i];
for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
      if(v[i]>v[j])
        {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
        }
for(i=1;i<=n;i++)
    cout<<v[i]<<" ";
if(v[1]!=1 || v[2]!=2)

    cout<<"Nu";
else
    for(i=3;i<=n;i++)
     if(v[i-2]*v[i-1]==v[i])
       k++;
    if(k==n)
        cout<<"Da.";
        else cout<<"Nu.";

    f.close();
    return 0;
}
