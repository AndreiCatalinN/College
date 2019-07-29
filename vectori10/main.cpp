#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int pc(int n) {
  while (n > 10)
    n = n / 10;
  return n;
}
int main() {
  int n, v[101], i, j, aux;
  f >> n;
  for (i = 1; i <= n; i++)
    f >> v[i];
  for (i = 1; i <= n; i++)
    for (j = i + 1; j <= n; j++)
      if (pc(v[i]) > pc(v[j])) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  f.close();
  return 0;
}
