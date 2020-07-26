#include <iostream>

using namespace std;
/*Scrieţi definiţia completă a subprogramului nreal cu doi parametri x şi y, numere naturale
din intervalul [1;1000] ce returnează un număr real cu proprietatea că partea sa întreagă
este egală cu x, iar numărul format din zecimalele sale, în aceeaşi ordine, este egal cu y.
Exemplu: pentru x=12 şi y=543, subprogramul returnează valoarea 12.543.*/
int nreal(int x, int y)
{
    float z=0;int aux=0;
    int p=1;
    float a=0;
    aux=y;
    while(aux!=0)
    {
        p=p*10;
        aux=aux/10;
        }

        z=x+y/p;
        return z;

}
int main()
{
   cout<<nreal(12,34);
    return 0;
}
