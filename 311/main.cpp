/*
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;

// open file
ifstream f("date.in");

int main() {
  int v[100], n;
  int i, k = 1, km = 0;

  // read from file
  f >> n;
  for (i = 0; i < n; i++)
    f >> v[i];
  // print contents
  for (i = 0; i < n; i++)
    cout << v[i] << " ";
  // counts the longest ordered row of numbers
  for (i = 0; i < n; i++) {
    if (v[i] <= v[i + 1]) {
      k++;
      if (k > km)
        km = k;
    } else
      k = 0;
  }
  cout << endl << km;
  f.close();
  return 0;
}
