#include <iostream>
/*
Program description: The file date.in has ordered numbers.
Print the value that appears the most in date.in.
In care there are multiple values with maximum frequency, the
smallest value will be printed.
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
using namespace std;
ifstream f("date.in");
/**
18.	Fişierul date.in memorează numere întregi de cel mult 4
 cifre fiecare, ordonate crescător.
 Să se afişeze valoarea care apare de cele mai multe în fişier.
 În cazul în care există mai multe valori cu frecvenţa maximă
 se va afişa cea mai mica dintre ele.
**/

int main() {
  int a, k = 1, kmax = 1, val, x;
  f >> a;
  val = a;
  while (f >> x) {
    if (x == a) {
      k++;
      if (kmax <= k) {
        kmax = k;
        val = x;
      }
    } else if (k == kmax)
      break;
    else {
      k = 1;
      a = x;
    }
  }
  if (kmax == 1)
    cout << x;
  else
    cout << "Value: " << val << " with the frequency of " << kmax;
  f.close();

  return 0;
}
