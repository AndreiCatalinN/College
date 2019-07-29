/**
Name: Andrei Negura
IDE: Code Blocks
Date: 21/05/2015
Description: Prints all the even, 5 digits, palindromes
*/
#include <iostream>

using namespace std;

int even(int x) {
  if (x % 2 == 0)
    return 1;
  return 0;
}

int palindrome(int x) {
  int aux = x;
  int inv = 0;

  // Build the inverse
  while (x != 0) {
    inv = inv * 10 + x % 10;
    x = x / 10;
  }

  if (aux == inv)
    return 1;
  return 0;
}

int main() {
  long int i;

  for (i = 10000; i < 90000; i += 2)
    if (even(i) == 1 && palindrome(i) == 1)
      cout << i << " ";
  return 0;
}
