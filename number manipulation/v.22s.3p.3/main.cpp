/**
a) Scrieţi definiţia completă a unui subprogram, nz, cu un parametru întreg n
(0<n≤32000), care returnează numărul zerourilor de la sfârşitul numărului n!.
(6p.)
b) Scrieţi programul C/C++ care citește de la tastatură un număr natural k
(0<k≤3) și determină, folosind apeluri ale subprogramului nz, cel mai mic număr
natural n pentru care
n! are cel puţin k zerouri la sfârşit. Numărul determinat se afișează pe ecran.
(4p.)*/

#include <iostream>

using namespace std;

int nz(int n)
{
    int p, i, aux;
    aux = 0;
    p = 0;
    if (n <= 5)
        p = 1;
    else
        for (i = 5; i <= n; i = i + 5)
        {
            aux = i;
            if (aux % 5 == 0)
            {
                aux = aux / 5;
                p++;
            }
        }
    return p;
}

int main()
{
    int n = 1, k;
    cin >> k;
    while (nz(n) < k)
        n++;
    cout << n; /// nu merge pentru k=1;
    return 0;
}
