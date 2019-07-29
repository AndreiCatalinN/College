#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
void inserare(int v[100], int &n, int p, int x) {
  int i;
  n++;
  for (i = n; i >= p + 1; i--)
    v[i] = v[i - 1];
  v[p] = x;
}
int main() {
  int m, n, p, i, j, v[100], w[100];

  f >> m >> n >> p;
  for (i = 1; i <= m; i++) {
    f >> v[i];
    cout << v[i] << " ";
  }
  cout << endl;
  for (i = 1; i <= n; i++) {
    f >> w[i];
    cout << w[i] << " ";
  }
  cout << endl;
  for (i = 1; i <= m; i++)
    if (i == p)
      for (j = n; j >= 1; j--)
        inserare(v, m, i, w[j]);
  for (i = 1; i <= m; i++)
    cout << v[i] << " ";
  f.close();
  return 0;
}
