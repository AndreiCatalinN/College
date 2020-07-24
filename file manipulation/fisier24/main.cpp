#include <iostream>
#include <fstream>
using namespace std;
ifstream f ("date.in");

int main()
{int max=-10000,x;
   while(f>>x)
   {
       if(max<x)
        max=x;

   }
   cout<<max;
    return 0;
}
