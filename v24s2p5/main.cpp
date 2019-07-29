#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream f("date.in");
  char s[256], a[256];
  int i, poz = -1;
  cin >> s >> a;
  int n = strlen(s), m = strlen(a);
  i = n;
  int j = m;
  while (i >= 0 && j >= 0) {
    if (s[i] == a[j])
      poz = i;
    i--;
    j--;
  }
  if (poz != -1)
    for (i = poz; i <= n; i++)
      cout << s[i];
  else
    cout << "Nu exista";
  f.close();
  return 0;
}
