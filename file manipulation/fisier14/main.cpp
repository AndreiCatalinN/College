#include <iostream>
#include <fstream>

using namespace std;
ifstream f("numere.in");

int main()
{ int x,ap,y;
    f>>x;
ap=1;
y=x;
while(f>>x)
{
    if(x<y)
        ap++;
}
cout<<ap;
    return 0;
}
