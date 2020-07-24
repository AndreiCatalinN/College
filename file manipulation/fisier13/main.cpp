#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{ int x,y,ok=0;
    while(f>>x>>y)
   {if(x!=y)
        ok=1;
    x=y;}
    if(ok==1)
        cout<<"Nu.";
    else
        cout<<"Da.";/// ????
    return 0;
}
