#include <iostream>

using namespace std;
void baza(int x,int b)
{
    if(x>1)
    {
        cout<<x%b;
        baza(x/b,b);
    }
    else cout<<x;
}
int main()
{int x,b;
cin>>x>>b;
baza(x,b);


    return 0;
}
