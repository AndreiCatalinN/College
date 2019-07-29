/*
Program description: finds the 2 smallest values in a file
Author:Andrei Negura
Date: 05/10/2014
IDE:  Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
/**5. Să se afişeze cele mai mici două valori din fişierul date.in care
 * memorează numere întregi cu cel mult 4 cifre fiecare**/
int main() {
  int a = 10000, b = 10000, x;
  while (f >> x) {
    if (x < b) {
      a = b;
      b = x;
    } else if (x <= a && x >= b)
      a = x;
  }
  cout << "A=" << a << " "
       << "B=" << b;

  f.close();
  return 0;
}
