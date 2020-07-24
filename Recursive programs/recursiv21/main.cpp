#include <iostream>

using namespace std;
void progresie(int a,int r,int n)
{
    if ( n > 0 )
    {
        progresie( a,r, n-1);
        cout<<a+(n-1)*r<<", ";
    }
}

int main()
{
    int a,r,n;
    cout<<"a=";cin>>a;
    cout<<"n=";cin>>n;
    cout<<"r=";cin>>r;
    progresie(a,r,n);

    return 0;
}
