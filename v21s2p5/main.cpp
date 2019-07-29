#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream f("date.in");
  char s[256];
  int i;
  f.getline(s, 256);
  int n = strlen(s);
  for (i = 0; i <= n; i++)
    if (s[i] == s[i + 1] && isalpha(s[i]) != 0)
      cout << s[i] << s[i + 1] << endl;

  f.close();
  return 0;
}
