#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[51];
  int n, i, ok = 1;
  cin >> s;
  n = strlen(s);

  for (i = 0; i < n; i++) {
    s[i] = toupper(s[i]);

    if (s[i] < 'A' || s[i] > 'Z')
      ok = 0;
  }
  if (ok == 0)
    cout << "Nu memoreaza numai litere";
  else
    cout << "Memoreaza numai litere";
  return 0;
}
