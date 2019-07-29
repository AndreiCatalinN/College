/*
Program description: Reads
numbers from a file and gets the frequency of the digits in numbers

Author:Andrei Negura
Date: 14/10/2014
IDE:  Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.in");
ofstream g("numere.out");

int main() {
  int x, v[10] = {0}, i = 0, c = 0;

  // Reads file and gets the frequency of digits
  while (f >> x) {
    while (x != 0) {
      v[x % 10]++;
      x = x / 10;
    }
  }

  for (i = 0; i < 10; i++)
    g << v[i] << " ";

  for (i = 0; i < 10; i++)
    cout << v[i] << " ";

  f.close();
  g.close();
  return 0;
}
