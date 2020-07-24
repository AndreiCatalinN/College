#include <iostream>
/*a) Scrieţi doar antetul funcţiei sum care primeşte ca parametru un număr natural nenul x cu
maximum 9 cifre şi returnează suma divizorilor numărului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6). (3p.)
b) Să se scrie un program C/C++ care citeşte de la tastatură un număr natural n (0<n<25) şi
apoi n numere naturale nenule cu maximum 9 cifre fiecare. Programul calculează, folosind
apeluri ale funcţiei sum, şi afişează pe ecran câte numere prime conţine şirul citit.
Exemplu: pentru n=5 şi valorile 12 3 9 7 1 se va afişa pe ecran valoarea 2 (în şirul dat
există două numere prime şi anume 3 şi 7).*/
using namespace std;
int sum(int x)
{
    int i,s=0;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
         s=s+i;
    if(s==0)
        s=1;
    return s;

}
int main()
{cin>>n;
for(i=1;i<=n;i++)
    cin>>x;
for(i=1;i<=n;i++)
    if(sum(x)==1)
        k++;
cout<<k;
    return 0;
}
