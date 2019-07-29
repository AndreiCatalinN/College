#include <cstring>
#include <iostream>
using namespace std;
int v['z' + 1];
int main() {
  char s[256];
  int n, i, q, k = 0, nr = 0;
  cin >> q;
  cin.get();
  cin.getline(s, 256);

  n = strlen(s);

  for (i = 0; i <= n; i++) {
    if (s[i] != ' ')
      k++;
    if (k == q)
      nr++;
  }
  cout << nr;
  return 0;
}
