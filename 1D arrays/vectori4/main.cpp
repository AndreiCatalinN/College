#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{int i,v[10],n,k=0;
   f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<=n;i++)
        if(v[1]==v[i])
            k++;
    if(k==n)
        cout<<"Da.";
        else cout<<"Nu.";
    f.close();
    return 0;
}
