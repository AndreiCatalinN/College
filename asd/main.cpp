/*
Program description: Function that uses recursivity
AUthor: Andrei Negura
IDE: Code Blocks

*/
#include <iostream>

using namespace std;

int F(int x)
{
    if(x == 0)
        return 0;
    else if(x%2 == 0)
        return 2 + F(x/10);
    else
        return 10 - F(x/10);
}

int main()
{
    cout<< F(2757);
    return 0;
}
