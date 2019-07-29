#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[51];
  cin >> s;
  int n = strlen(s), sum = 0, i;
  for (i = 0; i <= n; i++)
    sum = sum + s[i];
  cout << sum << endl;

  return 0;
}
