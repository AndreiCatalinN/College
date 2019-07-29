/*
Program description: Finds the biggest
number in file date.in
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int x, m = -100;
  while (f >> x) {
    if (m < x)
      m = x;
  }
  cout << m;

  f.close();
  return 0;
}
