#include <iostream>

using namespace std;

int main()
{
    int a, b, x, k;
    cin>>x;
    k=0;
    for(a=2; a<=x; a++)
    {
        b=0;
        while(x%a==0)
        {
            x=x/a;
            b++;
        }
        if(b>0)
            k++;
    }
    cout<<k;
    return 0;
}
