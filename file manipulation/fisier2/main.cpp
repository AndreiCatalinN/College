#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{int n,i,x,s=0;
    f>>n;
    for(i=1;i<=n;i++)
        {f>>x;
        s=s+x;
        if(i==1)
            cout<<x;
        if(i<=n && i>1)
            cout<<"+"<<x;
        if(i==n)
         cout<<"="<<s;}
         f.close();
    return 0;
}
