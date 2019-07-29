#include <iostream>

using namespace std;
int suma(int n) {
  if (n > 0)
    if (n % 2 == 1)
      return +(n * n) + suma(n - 1);
    else
      return -(n * n) + suma(n - 1);

  else
    return 0;
}
int main() {
  int n;
  cin >> n;
  cout << suma(n);
  return 0;
}
