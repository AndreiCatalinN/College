#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream f("date.in");
  char s1[256], s2[256], c;
  cin >> s1;
  int i, n = strlen(s1), j;

  for (i = 0; i <= n; i++) {
    if (strchr("aeiou", s1[i]) != 0)
      c = s1[i];

    if (c == s1[i]) {
      j = 0;
      while (j <= n)
        if (s1[j] == c) {
          strcpy(s2 + j, s2 + j + 1);
          cout << s2;
        }
    }
  }

  return 0;
}
