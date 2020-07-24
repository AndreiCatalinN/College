/**
Program description:
Inputs a number n from the keyboard.
Increments the number until the sum of
its digits reaches a sum imputed from the keyboard
Author: Andrei Negura
IDE: Code Blocks
Date:
*/

#include <iostream>

using namespace std;
int sum(int x)
{
    int s=0;
    while(x>0)
    {
        s=s+x%10;
        x=x/10;
    }
    return s;
}
int main()
{
    int n,aux,s;

    cout<<"Number: ";
    cin>>n;
    cout<<"Sum: ";
    cin>>s;
    aux=n;
    while(sum(aux)!=s)
        aux++;

    cout<<aux;
    return 0;
}
