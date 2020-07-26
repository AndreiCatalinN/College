#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nr.txt");

int main()
{
    int x,ok=0;
    while(f>>x)
    {
        if(x<100)
        {
            cout<<x<<" ";
            ok=1;
        }
    }
    if(ok==0)
        cout<<"Nu exista.";
    f.close();
    return 0;
}
