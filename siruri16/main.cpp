#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[256];
  int n, i, k = 0;
  cin.getline(s, 256);
  n = strlen(s);
  for (i = 0; i <= n; i++)
    if (isalpha(s[i]) != 0 && (s[i + 1] == ' ' || s[i + 1] == NULL))
      k++;
  cout << k;
  return 0;
}
