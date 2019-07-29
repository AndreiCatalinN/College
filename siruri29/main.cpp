#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  char s[256];
  int n, i;

  f >> s;
  n = strlen(s);
  i = 0;
  while (i < n && s[i] != 0)
    if (s[i] == s[i + 1])
      strcpy(s + i, s + i + 1);
    else
      i++;
  cout << s;
  f.close();

  return 0;
}
