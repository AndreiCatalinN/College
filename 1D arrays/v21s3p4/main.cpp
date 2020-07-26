#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");


int main()
{
    int n, k, i,j,p;
    float s=0,sm=0, v[101];

    f>>n>>k;

    for(i=1; i<=n; i++)
        f>>v[i];

    for(i=1; i<=n-k+1; i++)
    {
        for(j=i; j<=i+k-1; j++)
        {
            s=s + v[j]/k;
        }
        if(sm<s)
        {
            sm=s;
            p=i;
        }
        s=0;
    }
    cout<<p;
    f.close();
    return 0;
}
