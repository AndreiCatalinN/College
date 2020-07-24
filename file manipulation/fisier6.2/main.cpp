#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
/**6.	Să se afişeze cele mai mari trei valori din fişieruldate.in care memorează numere întregi cu cel mult 4 cifre fiecare.**/
int main()
{int a=-10000,b=-10000,c=-10000,x;
    while(f>>x)
    {
        if(x>=c)
            {a=b;
            b=c;
            c=x;}
            else if(x>b && x<c)
                {a=b;
                    b=x;}
                    else if( x>a && x<b && x<c)
                            a=x;

    }
    cout<<"a="<<a<<" b="<<b<<" c="<<c;

    return 0;
}
