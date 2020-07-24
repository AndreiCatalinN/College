#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{
    int x, v[1000],k=2;
    for(x=999;x>99;x--)
    {
        v[x]=0;
    }
    while(f>>x)
    {if(x>99 && x<1000)
        v[x]++;}

    for(x=999;x>99;x--)
        if(v[x]==0 && k>0)
        {cout<<x<<" "; k--;}
    if(k!=0)
        cout<<"0";
    return 0;
}
