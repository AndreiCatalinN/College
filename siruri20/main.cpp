#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[101], a[101], c[101];
  int n, i, m = 0, ok = 1;
  cin >> s;
  cin >> a;
  n = strlen(s);

  for (i = 0; i <= n; i++)
    if (s[i] == a[i]) {
      c[m] = a[i];
      m++;
    } else
      break;

  if (c[0] != 0)
    for (i = 0; i < m; i++)
      cout << c[i];
  else
    cout << "fara prefix";
  return 0;
}
