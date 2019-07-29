#include <iostream>

using namespace std;
int multiplu(int a[101], int n, int k) {
  int c = 0;
  int i;
  for (i = 1; i <= n; i++)
    if (a[i] % k == 0 && a[i] % 10 == k)
      c++;
  return c;
}
int main() {
  int a[101], i, n, k = 0, c;
  cin >> n >> k;
  for (i = 1; i <= n; i++)
    cin >> a[i];

  cout << multiplu(a, i, k);
  return 0;
}
