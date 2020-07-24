#include <iostream>
#include <cmath>

using namespace std;

int prim(int x)
{
    int i;
    if(x<2)
        return 0;
    for(i=2; i<=x/2; i++)
        if(x%i==0)
            return 0;
    return 1;
}

int main()
{
    int n,i;
    cin>>n;
    if(n==2)
        cout<<"2 * 1=2";
    for(i=1; i<=n/2; i=i+2)
        if(prim(i)==1 && prim(n/i)==1 && i*(n/i)==n)
            cout<< i<<" * "<<n/i<< "="<<n<<endl;

    return 0;
}
