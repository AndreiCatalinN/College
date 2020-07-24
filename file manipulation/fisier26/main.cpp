#include <iostream>
#include <fstream>
using namespace std;
ifstream f("produse.txt");

int main()
{int x,y,z,a, v[110];


 for(a=1;a<100;a++)
    v[a]=0;
while(f>>x>>y>>z)
    {
           v[x]= v[x] + y*z;
    }
    for(a=1;a<100;a++)
        if(v[a]!=0)
         cout<<a<<" "<<v[a]<<endl;
         f.close();
    return 0;
}
