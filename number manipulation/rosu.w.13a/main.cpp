#include <iostream>

using namespace std;

int main()
{
    int k=3,x,n;
    cin>>x;
    n=x%100;
    while(k!=0)
    {
        x=x/10;
        k--;
    }
    x=x*100 +n;
    cout<<x;
    return 0;
}
