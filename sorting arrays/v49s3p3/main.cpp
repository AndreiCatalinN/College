#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{
    int i,n,v[50],j,a;
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(v[i]> v[j])
            {
                a=v[i];
                v[i]=v[j];
                v[j]=a;
            }
    int ok=0;
    for(i=1; i<n; i++)
        if(v[i+1]-v[i]==i)
            ok==0;
        else
        {
            ok=1;
            break;
        }

    if (ok==0)
        cout<<"da";
    else
        cout<<"nu";
    f.close();
    return 0;
}
