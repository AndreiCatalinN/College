#include <fstream>
#include <iostream>
using namespace std;
ifstream g("date.in");
int i;
void f(int n, int a[101], int &k) {
  int ok = 1;
  k = 0;
  for (i = n; i > 0; i--)
    if (a[i] % 2 == 0) {
      k = k * 10 + a[i];
      ok = 0;
    }
  if (ok == 1)
    k = -1;
}

int main() {
  int n, a[101], k;
  g >> n;
  for (i = 1; i <= n; i++)
    g >> a[i];
  f(n, a, k);
  cout << k;
  g.close();
  return 0;
}
