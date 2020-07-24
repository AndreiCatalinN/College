#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{int x,m=-100;
while(f>>x)
{if(m<x)
     m=x;}
     cout<<m;

f.close();
    return 0;
}
