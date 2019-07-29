#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int n, v[100000], m = -1, k = 0, i;
  ifstream f("numere.txt");
  f >> n;
  for (i = 1; i <= n; i++) {
    f >> v[i];
    if (m < v[i]) {
      m = v[i];
      k = 0;
    }
    if (m == v[i])
      k++;
  }
  cout << m << " " << k;
  f.close();
  return 0;
}
