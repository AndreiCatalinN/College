#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[41];
  int n, i, ok = 1;
  cin >> s;
  n = strlen(s);

  for (i = 0; i < n; i++) {
    if ((s[i] >= 'A' && s[i] < 'Z') || (s[i] >= 'a' && s[i] < 'z'))
      s[i]++;
    if (s[i] == 'Z')
      s[i] = 'A';
    if (s[i] == 'z')
      s[i] = 'a';
  }
  cout << s;

  return 0;
}
