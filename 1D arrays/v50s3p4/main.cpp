#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int fr[10000];

int main()
{
    int n, i, v[5000],max ;
    f>>n;
    for(i=1;i<=n;i++)
        {f>>v[i];
            fr[v[i]]++;
            if(max<v[i])
                max=v[i];
            }
    for(i=1;i<=max;i++)
    {
        if(fr[i]>=2)
            cout<<i<<" ";
    }
   f.close();
    return 0;
}
