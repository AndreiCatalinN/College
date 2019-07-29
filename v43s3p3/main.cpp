#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int p(int n, int a[100]) {
  int s = 0, i;
  for (i = 1; i <= n; i++)
    if (a[i] % 2 == 1 && i % 2 == 0)
      s = s + a[i];
  return s;
}
int main() {
  int i, n, v[100];
  f >> n;
  for (i = 1; i <= n; i++)
    f >> v[i];
  cout << p(n, v);
  f.close();
  return 0;
}
