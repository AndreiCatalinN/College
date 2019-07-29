#include <iostream>

using namespace std;

int main() {
  int v[110];
  int n, i, a;
  cin >> n;
  v[1] = 1;
  v[2] = 1;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  return 0;
}
