#include <iostream>

using namespace std;
int suma(int n)
{
    if(n!=0)
        return n*(n-1)+ suma(n-1);
    else return 0;
}
int main()
{
   int n;
cin>>n;
    cout << suma(n);
    return 0;
}
