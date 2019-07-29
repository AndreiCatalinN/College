#include <fstream>
#include <iostream>

using namespace std;
ifstream f("nr.txt");
int main() {
  int x, n = 0, i, j, aux, v[101];

  while (f >> x) {
    if (x > 0) {
      n++;
      v[n] = x;
    }
  }
  for (i = 1; i <= n; i++)
    for (j = i + 1; j <= n; j++) {
      if (v[i] > v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  return 0;
}
