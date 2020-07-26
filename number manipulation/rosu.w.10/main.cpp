#include <iostream>

using namespace std;

int main()
{
    int x,x1=0,y=0;
    cin>>x;

    while(x!=0)
    {
        if(x%2==0)
            y=y*10+x%10;
        x=x/10;
    }
    while(y!=0)
    {
        x1=x1*10+y%10;
        y=y/10;
    }
    cout<<x1;
    return 0;
}
