#include <iostream>

using namespace std;

int main()
{
    int x,s=0,y;
    cin>>x;
    while(x!=1)
    {
        s=0;
        while(x>0)
        {
            s=s+x%10;
            x=x/10;
        }
        x=s;
    }
    cout<<x;
    return 0;
}
