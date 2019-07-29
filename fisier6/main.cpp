/*
Program description: Prints the last prime number in the file
Author:Andrei Negura
Date: 23/11/2014
IDE:  Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int prim(int x) {
  int i;
  for (i = 2; i <= x / 2; i++)
    if (x % i == 0)
      return 1;
  return 0;
}

int main() {
  int x, u;
  while (f >> x) {
    if (prim(x) == 0)
      u = x;
  }
  cout << u;
  f.close();
  return 0;
}
