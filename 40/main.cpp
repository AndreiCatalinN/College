/**
Program description:
Print the  first n pairs of consecutive
numbers for which the sum of their digits
equals s read from the keyboard
Author: Andrei Negura
Date: 23/03/2016
IDE: Code Blocks
*/
#include <iostream>
using namespace std;

// Returns the sum of the digits of a number
// Ex for x=102 it returns 3
int sum(int x) {
  int s = 0;
  while (x > 0) {
    s = s + x % 10;
    x = x / 10;
  }
  return s;
}

int main() {

  int m, n, i, j, s, sm;
  cout << "Search until: ";
  cin >> m;

  cout << "Search n pairs: ";
  cin >> n;

  cout << "Sum of the digits: ";
  cin >> s;

  // finds pairs of numbers and
  // checks if their digits sum equals to s
  for (i = 1, j = 0; i < m, j < n; i++) {
    sm = sum(i) + sum(i + 1);
    if (sm == s) {
      cout << i << " " << i + 1 << endl;
      j++;
    }
  }

  return 0;
}
