#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");

void sterge(int v[100], int &n, int p) {
  int i;
  for (i = p; i < n; i++)
    v[i] = v[i + 1];
  n--;
}

int main() {
  int n, v[100], i, p;
  f >> n;
  for (i = 1; i <= n; i++) {
    f >> v[i];
    cout << v[i] << " ";
  }
  cout << endl;

  p = 1;
  while (p <= n) {
    if (v[p] % 2 == 0 && v[p + 1] % 2 == 0)
      sterge(v, n, p);
    else
      p++;
    if (v[p] % 2 == 1 && v[p + 1] % 2 == 1)
      sterge(v, n, p);
    else
      p++;
  }
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  f.close();
  return 0;
}
