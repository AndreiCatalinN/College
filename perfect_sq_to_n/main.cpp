/*
Program description:
Prints all the perfect
squares smaller or equal to n.
*/
#include <iostream>
#include <math.h>

using namespace std;

int n,i;

int main()
{
    cout<<"n=";
    cin>>n;
    cout<<endl;
    int k=0;

    for(i=2; i<=sqrt(n); i++)
        cout<<i*i<<" ";

    if(sqrt(n)<2)
        cout<<"Nu avem patrate.";

    return 0;
}
