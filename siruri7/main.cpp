#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[51], c;
  int n, i, k = 0;
  cin >> s >> c;
  n = strlen(s);

  for (i = 0; i <= n; i++)

    if (s[i] == c)
      k++;

  cout << k;
  return 0;
}
