#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
void cif(int nr,int &s)
{ s=0;
    while(nr!=0)
    {
        s=s+nr%10;
        nr=nr/10;
    }
}
int main()
{ int n, i ,v[100], u[100],s=0, max=0;
    f>>n;
    for(i=1;i<=n;i++)
        {f>>v[i];
         s=0;
          cif(v[i],s);
          u[i]=s;
            }
     for(i=1;i<=n;i++)
                cout<<u[i]<<" ";
     cout<<endl;
    for(i=1;i<=n;i++)
        if(u[i]>max)
         max=u[i];

     for(i=1;i<=n;i++)
        if(max==u[i])
         cout<<v[i]<<" ";
    f.close();
    return 0;
}
