#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char a[100], b[100];
  int n, i, m, j, ok = 0;

  cin >> a >> b;
  n = strlen(a);
  m = strlen(b);
  i = 0;
  j = 0;
  while (i < n && j < m) {
    if (a[i] == b[j] && isalpha(b[j]) != 0) {
      i++;
      j++;
    } else if (isalpha(b[j]) != 0 && isalpha(a[i]) != 0 && a[i] != b[j]) {
      ok = 1;
      i++;
      j++;
    }
    if (isalpha(a[i]) != 0 && isalpha(b[j]) == 0)
      j++;
    else if (isalpha(b[j]) != 0 && isalpha(a[i]) == 0)
      i++;
    if (isalpha(b[j]) == 0 && isalpha(a[i]) == 0) {
      i++;
      j++;
    }
  }
  if (ok == 1)
    cout << "Nu.";
  else
    cout << "Da.";
  return 0;
}
