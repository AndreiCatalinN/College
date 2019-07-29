#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int n, k, v[100], i, j;

  f >> n >> k;
  for (i = 1; i <= n; i++)
    f >> v[i];
  int aux;
  while (k != 0) {
    aux = v[1];
    for (j = 1; j < n; j++)
      v[j] = v[j + 1];
    v[n] = aux;
    k--;
  }

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  f.close();
  return 0;
}
