/*
Program description: Inputs a number and expresses
that number as the sum of 2 perfect numbers.
Author: Andrei Negura
IDE: Code Blocks
Date: 20/04/2015
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,k=0, num1=0, num2=0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
        //check if it's a perfect number
        if(sqrt(i)==(int)sqrt(i) && sqrt(n-i)==(int)sqrt(n-i))
        {
            num1 = i;
            num2 = n-i;
            k=1;
        }

    if(k == 1)
        cout<<num1<<" + "<<num2<<" = "<<n<<endl;
    else cout<<"There is no such pair for this number";


    return 0;
}
