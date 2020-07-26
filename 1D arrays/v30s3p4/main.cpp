#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream f("numere.in");
int fr[100];
int main()
{int n,i; float x;
   f>>n;
   for(i=1;i<=n;i++)
    {f>>x;
     if(x>=floor(x) && x<=ceil(x))
            cout<<floor(x)<<" "<<ceil(x)<<endl;
            }
}
