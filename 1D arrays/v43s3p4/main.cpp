#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.txt");
int main()
{
    int n, v[100000],i,fr[10];
    f>>n;
    for(i=1; i<=n; i++)
    {
        f>>v[i];
        fr[v[i]]++;
    }
    for(i=9; i>=0; i--)
        while(fr[i]!=0)
        {
            cout<<i;
            fr[i]--;
        }
    f.close();
    return 0;
}
