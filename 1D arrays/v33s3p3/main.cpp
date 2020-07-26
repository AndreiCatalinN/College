#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int sum3(int x[100], int n)
{int i, s=0;
    for(i=1;i<=n;i++)
        if(x[i]%3==0)
         s=s+x[i];
    if(s==0)
        return 0;
    else return s;
}
int main()
{ int n,i,x[100];
f>>n;
for(i=1;i<=n;i++)
    f>>x[i];
cout<<sum3(x,n);
    f.close();
    return 0;
}
