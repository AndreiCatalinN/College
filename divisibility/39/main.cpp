/*
program description:
Display the numbers which have
number A of digits equal with number B of
digits. Ex: A=2 B=3 22033 is such a number 2
of A's and 2 B's
Author: Andrei Negura
IDE: Code blocks
Date: 09/10/2017
*/
#include <iostream>

using namespace std;

//Counts the digits in number x that are equal to y
int check(int x, int y)
{
    int c=0;
    while(x!=0)
    {
        if(x%10==y)
            c++;
        x=x/10;
    }

    return c;
}

int main()
{
    int m,i,a,b;
    int num_A, num_B;

    cout<<"Search until: ";
    cin>>m;

    cout<<"a and  b: ";
    cin>>a>>b;

    for(i=1;i<=m;i++)
    {
        num_A = check(i,a);
        num_B = check(i,b);
        if(num_A == num_B && num_B>0 && num_A>0 )
            cout<<i<<" ";
    }

    return 0;
}
