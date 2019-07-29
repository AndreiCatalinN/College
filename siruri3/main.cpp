#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[51];
  int fr['Z' + 1], n, i, ok = 1;
  for (i = 'A'; i <= 'Z'; i++)
    fr[i] = 0;
  cin >> s;
  n = strlen(s);
  for (i = 0; i <= n; i++) {
    s[i] = toupper(s[i]);
    fr[s[i]]++;
  }
  cout << endl;
  for (i = 'A'; i <= 'Z'; i++)
    if (fr[i] > 1)
      ok = 0;
  if (ok == 0)
    cout << "Are dubluri";
  else
    cout << "Nu are dubluri";
  return 0;
}
