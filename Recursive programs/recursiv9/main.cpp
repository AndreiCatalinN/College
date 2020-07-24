#include <iostream>

using namespace std;
int cifra(int x, int c)
{
    if(x>0)
    {
        if(x%10==c)
            return 1+cifra(x/10,c);
        else
            return 0+cifra(x/10,c);
    }
    else return 0;
}
int main()
{int x,c;
cout<<"x=";
cin>>x;
cout<<"c=";cin>>c;
    cout <<cifra(x,c);
    return 0;
}
