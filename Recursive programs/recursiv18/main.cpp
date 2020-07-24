#include <iostream>

using namespace std;
int produs(int n)
{
    if(n!=0)
        return (n+n-1)* produs(n-1);
    else return 1;
}
int main()
{
   int n;
cin>>n;
    cout <<produs(n);
    return 0;
}
