#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[51];
  int n, i, k = 0;
  cin.getline(s, 51);

  n = strlen(s);

  for (i = 0; i <= n; i++)

    if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
         s[i] == 'u') &&
        (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' ||
         s[i + 1] == 'o' || s[i + 1] == 'u')) {
      k++;
      cout << s[i] << s[i + 1] << " ";
    }
  cout << endl << k;
  return 0;
}
