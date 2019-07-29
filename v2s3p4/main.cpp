#include <cmath>
#include <iostream>
using namespace std;
/*Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin
permutarea cifrelor lui n, sunt numere prime. De exemplu, numărul 113 este un
număr extraprim deoarece 113, 311, 131 sunt numere prime. a) Scrieţi definiţia
completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre
(a>1)
- returnează suma tuturor exponenţilor din descompunerea în factori primi a
valorii parametrului a. Exemplu: pentru a=90 subprogramul va returna valoarea 4,
deoarece a=2*32*5 şi 1+2+1=4. (4p.) b) Scrieţi un program C/C++ care citeşte de
la tastatură un număr natural n, 2≤n≤999 şi, folosind apeluri utile ale
subprogramului f, verifică dacă n este un număr extraprim. În caz afirmativ,
programul afişează pe ecran mesajul DA, în caz contrar afişând mesajul NU.
(6p.)*/
int suma_exp(int x) {
  int f, p, s = 0;
  f = 2;
  while (x != 1) {
    p = 0;
    while (x % f == 0) {
      x = x / f;
      p++;
    }
    s = s + p;
    f++;
  }
  return s;
}
int numara(int x) {
  int p = 0;
  while (x != 0) {
    p++;
    x = x / 10;
  }
  return p;
}
int main() {
  int x;
  cin >> x;
  cout << suma_exp(x) << endl;
  if (suma_exp(x) > 1)
    cout << "nu";
  else if (suma_exp(x) == 1)
    /// To be continued.. Aici nu stiu.

    return 0;
}
