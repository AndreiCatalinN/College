#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
void inter( int &x, int &y)
{
    int aux;
    aux=x;
    x=y;
    y=aux;
}
int main()
{int n, i, v[1000],j;
 f>>n;
 for(i=1;i<=n;i++)
    f>>v[i];
 for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++)
        if(v[i]>v[j])
         inter(v[i],v[j]);
 for(i=1;i<=n;i++)
    cout<<v[i]<<" ";

    f.close();
    return 0;
}
