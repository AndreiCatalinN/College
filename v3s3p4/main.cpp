#include <iostream>
/**Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre
şi care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
mare număr palindrom ce poate fi obţinut prin rearanjarea tuturor cifrelor numărului n. Dacă
nu se poate obţine un palindrom din toate cifrele numărului n, programul va afişa pe ecran
numărul 0. Un număr natural este palindrom dacă este egal cu numărul obţinut prin scrierea
cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 53211235, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0.**/
using namespace std;
int cif(int a, int b)
{int p=0;
    while(a!=0)
    {if(a%10==b)
        p++;
    a=a/10;}
    return p;
}
int main()
{int a,b;
cin>>a>>b;
  cout<<cif(a,b);
    return 0;
}
