#include <iostream>
//	Să se afișeze primele n (n≤100) numere naturale care conțin cel puțin două zerouri.

using namespace std;
/*
Checks for the number of zeroes in a number.
*/
int verifica(int x)
{
    int c=0;
    while(x!=0)
    {
        if(x%10==0)
            c++;
        x=x/10;
    }
    return c;
}

int main()
{
    int n,c,j=100;
    cout<<"n numere: ";
    cin>>n;

    while(n!=0)
    {
        if(verifica(j)>=2)
        {
            cout<<j<<" ";
            n--;
        }
        j+=100;
    }

    return 0;
}
