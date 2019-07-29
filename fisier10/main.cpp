/*
Program description: Print the
penultimate prime number from the file date.in
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
/**10.	Să se afişeze penultimul număr prim
 din fişierul date.in care memorează numere întregi
 cu cel mult 4 cifre fiecare.**/
using namespace std;
ifstream f("date.in");
int prim(int x) {
  int i;
  for (i = 2; i <= x / 2; i++)
    if (x % i == 0)
      return 1;
  return 0;
}
int main() {
  int x, u, pn;

  while (f >> x) {
    if (prim(x) == 0) {
      pn = u; /// penultimul
      u = x;
    } /// ultimul
  }
  cout << pn;
  return 0;
}
