#include <iostream>

using namespace std;

int main()
{
    int x, c, k=0;
    cout<<"Number: ";
    cin>>x;

    cout<<"Digit you're looking for: ";
    cin>>c;


    while(x!=0)
    {
        if(x%10==c)
            k++;
        x=x/10;
    }
    if(k != 0)
        cout<< "Digit "<<c<<" appears "<<k<<" times";
    else
        cout<<"The digit does not appear ";

    return 0;
}
