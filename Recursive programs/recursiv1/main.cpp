#include <iostream>

using namespace std;
void afisare(int n)
{
    if(n>0)
    {if(n%10%2==0)
        {
        cout<<n%10<<" ";
        afisare(n/10);
        }
            else if(n%10%2==1)
        {
        afisare(n/10);
        cout<<n%10<<" ";
        }}
        else if (n==0) cout<<endl;

}
int main()
{int n;
cin>>n;
    afisare(n);
    return 0;
}
