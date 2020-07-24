#include <iostream>

using namespace std;
int x,y;
int main()
{cout<<"x=";cin>>x;cout<<endl;
    y=0;
    while(x!=0)
    {
        y=y*10 + x%10;
        x=x/10;
    }
        cout<<"Inversul lui x: "<<y;
    return 0;
}
