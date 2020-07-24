#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.txt");
/**Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere naturale despărţite prin câte un spaţiu, fiecare având cel
mult 9 cifre. Printre aceste numere se află cel puţin unul cu 3 cifre şi cel puţin unul cu 4 cifre.
a) Scrieţi în limbajul C/C++, un algoritm eficient din punct de vedere al gestionării memoriei
care citeşte din fişier datele existente şi determină şi afişează pe ecran, separate printr-un
spaţiu, două numere din fişier, x şi y, unde x este cel mai mare număr de trei cifre, iar y
este acel număr pentru care |x-y| are valoare minimă. Dacă sunt mai multe valori pentru y
care respectă condiţia impusă se va afişa numai una dintre ele. (10p.)
b) Explicaţi în limbaj natural metoda utilizată justificând eficienţa acesteia. (4p.)
Exemplu: dacă fişierul numere.txt are
conţinutul alăturat, se va afişa:
800 1100
5
112 333 1 500 1100
1 95 7 97 12
45 800 0 7 89
1 5 17 197 102
45 86 0 7 9**/
int main()
{int n,a,x=0,i;

    f>>n;
    for(i=1;i<=n;i++)
         while(f>>x)
            if(x<a && x<1000 && x>=100)
                    x=a;


    cout<<x;
    return 0;
}
