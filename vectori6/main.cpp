#include <iostream>

using namespace std;

int main() {
  int r, a, n = 7, v[10], i = 1, aux;
  cin >> r >> a;
  cin >> n;
  aux = n;
  while (n != 0) {
    v[1] = a;
    i++;
    v[i] = v[i - 1] + r;
    n--;
  }
  n = aux;
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  return 0;
}
