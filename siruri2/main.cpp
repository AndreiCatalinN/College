#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[41];
  cin >> s;
  int n = strlen(s), i;
  for (i = 0; i <= n; i++)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      cout << s[i] << " ";
  return 0;
}
