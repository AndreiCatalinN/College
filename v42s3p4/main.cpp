#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{int fr[100],v[100000],i,n;
   f>>n;

   for(i=1;i<=n;i++)
    {f>>v[i];
    fr[v[i]]++;}
    for(i=0;i<100;i++)
        if(fr[i]==1)
          cout<<i<<" ";

    f.close();
    return 0;
}
