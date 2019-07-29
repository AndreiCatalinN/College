#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, i, m, p = 0, j;
  char s[100], a[100], c[100];
  cin >> s;
  cin >> a;
  n = strlen(s);
  m = strlen(a);
  for (i = n, j = m; i >= 0, j >= 0; i--, j--)
    if (a[j] == s[i]) {
      c[p] = a[j];
      p++;
    } else
      break;
  if (c[0] != 0)
    for (i = p - 1; i > 0; i--)
      cout << c[i];
  else
    cout << "fara sufix";
  return 0;
}
