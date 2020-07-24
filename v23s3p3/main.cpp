#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
void shift(int n, int x[101])
{int i,aux,ok;
    for(i=1;i<n;i++)
    {
        if(x[i]<x[i+1])
        aux=x[i];
        x[i]=x[i+1];
        x[i+1]=aux;
        ok=0;

    }
}
int main()
{int n, x[101],i,ok=1;
 f>>n;
 for(i=1;i<=n;i++)
    f>>x[i];
    shift(n,x);
    for(i=1;i<=n;i++)
     cout<<x[i]<<" ";
    cout<<endl;
    do{
        ok=1;
        shift(n,x);
    }while(ok==0);
    for(i=1;i<=n;i++)
     cout<<x[i]<<" ";
    f.close();
    return 0;
}
