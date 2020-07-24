#include <iostream>

using namespace std;
int x, y;
int main()
{cout<<"x=";cin>>x;cout<<endl;
cout<<"y=";cin>>y;cout<<endl;
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    cout<<"cmmdc este: "<<x;
    return 0;
}
