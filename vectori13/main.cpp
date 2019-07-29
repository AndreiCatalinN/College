#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
void inserare(int v[101], int &n, int p, int x) {
  n++;
  int i;
  for (i = n; i >= p + 1; i--)
    v[i] = v[i - 1];
  v[p] = x;
}
int main() {
  int v[100], n, i;
  f >> n;
  for (i = 1; i <= n; i++) {
    f >> v[i];
    cout << v[i] << " ";
  }
  cout << endl;
  for (i = 1; i <= n; i++)
    if (v[i] % 2 == 1)
      inserare(v, n, i + 1, 2 * v[i]);
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  f.close();
  return 0;
}
