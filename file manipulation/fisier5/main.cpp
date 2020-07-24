#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
/**5. Să se afişeze cele mai mici două valori din fişierul date.in care memorează numere întregi cu cel mult 4 cifre fiecare**/
int main()
{int a=10000,b=10000,x;
while(f>>x)
{
    if(x<b)
        {a=b;
    b=x;}
    else
        if(x<=a && x>=b)
            a=x;
}
        cout<<"A="<<a<<" "<<"B="<<b;

    f.close();
    return 0;
}
