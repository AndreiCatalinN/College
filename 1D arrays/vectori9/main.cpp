#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{
    int n,i,v[101], m=-10000,a,b,y;
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<n;i++)
      {y=v[i]+v[i+1];
        if(m<y)
            {m=y;
             a=v[i];
             b=v[i+1];}
             else if(m==y)

             }
        cout<<a<<"+"<<b<<"="<<m<<endl;
    f.close();
    return 0;
}
