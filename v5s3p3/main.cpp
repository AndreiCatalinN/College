#include <iostream>
#include <fstream>
using namespace std;
ofstream g("nr.txt");
int main()
{int n;
    cin>>n;
    g<<n<<" ";
    while(n>0)
    {
        g<<n/10<<" ";
        n=n/10;
    }
       g.close();
    return 0;
}
