#include <iostream>
/*Scrieţi definiţia completă a subprogramului sub cu trei parametri: n (număr natural,
5<n≤30000), a şi b; subprogramul furnizează prin intermediul parametrilor a şi b cele mai
mari două numere prime distincte mai mici decât n.
Exemplu: dacă n= 28 la apelul subprogramului se va furniza prin parametrul a valoarea
23 şi prin parametrul b valoarea 19.*/
using namespace std;
int prim(int n)
{int i;
    for(i=5;i<=n/2;i++)
        if(n%i==0)
        return 1;
    return 0;
}
void sub(int n, int &a, int &b)
{
    int k=2;a=0;b=0;

        while(prim(n)==0)
           {k--;
            if(k==1)
                a=n;
            if(k==0)
                b=n;
                }
}
int main()
{ int n,a,b;

    sub(28,a,b);

    return 0;
}
