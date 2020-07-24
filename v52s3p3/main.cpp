#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int mult(int n, int a[999])
{int i,j;
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
         if(a[i]==a[j])
           return 0;
    return 1;
}
int main()
{int n,i,a[999],k=1;
    f>>n;
    for(i=1;i<=n;i++)
        f>>a[i];
       for(i=1;i<=n;i++)
        if(mult(i,a)==1)
            k++;
     cout<<k;

   f.close();
    return 0;
}
