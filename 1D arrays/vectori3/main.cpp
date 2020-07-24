#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int main()
{int i,r,ok=0,v[10],n;
   f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
     r=v[2]-v[1];
     for(i=1;i<=n;i++)
        if(v[i]+r==v[i+1])
         ok=1;
     if(ok==1)
        cout<<"Elementele sunt in progresie aritmetica.";
     else cout<<"Nu sunt in progresie aritmetica.";
f.close();
         return 0;
}
