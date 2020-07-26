#include <fstream>
#include <iostream>
using namespace std;
ifstream f("bac.txt");
int divizori(int x) {
  int k = 2, i;
  if (x == 1)
    return k = 1;
  if (x == 2 && x == 3)
    return k = 2;
  for (i = 2; i <= x / 2; i++)
    if (x % i == 0)
      k++;
  return k;
}
int main() {
  int i, n, v[100], k, b[100], m = 1;
  f >> n;
  cin >> k;
  for (i = 1; i <= n; i++)
    f >> v[i];
  for (i = 1; i <= n; i++)
    if (divizori(v[i]) >= k) {
      b[m] = v[i];
      m++;
    }
  for (i = 1; i < m; i++)
    cout << b[i] << " ";
  f.close();
  return 0;
}
