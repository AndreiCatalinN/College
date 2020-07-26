#include <iostream>
#include <fstream>
/**
reads an array from a file and orders
 the even numbers ascending
 and odd numbers descending
*/
using namespace std;
ifstream f("bac.txt");
int main()
{
    int poz1=0, poz2=0, i,n, aux, v[101];
    f>>n;
    for(i=1; i<=3*n; i++)
        f>>v[i];

    for(i=1; i<=n; i++)
        if(v[i]%2==0)
            poz1=i;

    for(i=2*n+1; i<=3*n; i++)
        if(v[i]%2==1)
            poz2=i;

    if(poz1!=0)
        for(i=1; i<=3*n; i++)
            if(i==poz1)
            {
                aux=v[poz1];
                v[poz1]=v[poz2];
                v[poz2]=aux;
            }
    for(i=1; i<=3*n; i++)
        cout<<v[i]<<" ";
    f.close();


    return 0;
}
