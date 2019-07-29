#include <fstream>
#include <iostream>

using namespace std;
ifstream f("bac.txt");
int main() {
  int x, m = 100, k = 2;
  while (f >> x) {
    if (m != x)
      cout << m << " " ///?????
  }

  return 0;
}
