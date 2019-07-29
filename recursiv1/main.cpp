/*
Program description: Using recursivity,
prints the odd and even digits in a number
on 2 rows
Author: Andrei Negura
IDE: Code Blocks
*/
#include <iostream>

using namespace std;
void afisare(int n) {
  if (n > 0) {
    if (n % 2 == 0) {
      cout << n % 10 << " ";
      afisare(n / 10);
    } else if (n % 2 == 1) {
      afisare(n / 10);
      cout << n % 10 << " ";
    }
  } else if (n == 0)
    cout << endl;
}
int main() {
  int n;
  cin >> n;
  afisare(n);
  return 0;
}
