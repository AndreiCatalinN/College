
/*
Program description: Print the
last 2 palindrome numbers from the file date.in
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>

/*9.	Să se afişeze ultimele două numere palindrom din
fişierul date.in care memorează numere întregi cu cel mult
 9 cifre fiecare.*/
using namespace std;
ifstream f("date.in");
int palindrom(int x) {
  int y = 0, aux;
  aux = x;

  while (x != 0) {
    y = y * 10 + x % 10;
    x = x / 10;
  }
  if (aux == y)
    return 1;
  else
    return 0;
}

int main() {
  int x, a = 1, b = 1;
  while (f >> x) {
    if (palindrom(x) == 1) {
      a = b;
      b = x;
    }
  }
  cout << "a=" << a << "b=" << b;

  return 0;
}
