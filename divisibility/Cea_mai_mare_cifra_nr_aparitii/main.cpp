/*
Program descripearches for the biggest digit in a
number and returns the number of appearances
Author: Andrei Negura
Os: win 10
Date: 20/12/2016
*/
#include <iostream>

using namespace std;
long int x, y, m, b,k;
int main()
{
    cout<<"x=";
    cin>>x;
    cout<<endl;

    y=x;

    while(x!=0)
    {
        b=x%10;
        if(b>m)
            m=x%10;
        x=x/10;
    }
    while(y!=0)
    {
        if(y%10==m)
            k++;
        y=y/10;
    }
    cout<<"Maximum number "<<m<<" appears "<<k<<" times.";
    return 0;
}
