#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream f("numere.txt");
int main()
{int n, x, y, ok=0, xmax=-101, ymin=101,i;
f>>n;

    for(i=1;i<=n;i++)
    {
        f>>x>>y;
        if(xmax<x)
            xmax=x;
        if(ymin>y)
            ymin=y;
        if(xmax<ymin)
            ok=1;
    }
    if(ok==1)
        cout<<xmax<<" "<<ymin;
    else cout<<0;
    return 0;
}
