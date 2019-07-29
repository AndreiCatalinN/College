#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[21];
  int n, i, u, p = 0;
  cin >> s;
  n = strlen(s);

  for (i = 0; i <= n; i++) {
    if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
         s[i] == 'u') &&
        p == 0)
      p = i;
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      u = i;
  }
  char aux;
  aux = s[p];
  s[p] = s[u];
  s[u] = aux;

  for (i = 0; i <= n; i++)
    cout << s[i];

  return 0;
}
