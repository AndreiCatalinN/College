/*
Program description:
Author: Andrei Negura
IDE: Code Blocks
*/
#include <iostream>

using namespace std;
void suma(int n) {
  int i;

  for (i = 1; i <= n / 2; i++)
    cout << n - i << " " << i << endl;
}

void suma1(int n) {
  int i = 1;
  if (n > n / 2) {
    cout << n << "+" << i << endl;
    suma(n - i);
  }
}

int main() {
  int n, i;
  cin >> n;
  i = 1;
  suma1(n);
  return 0;
}
