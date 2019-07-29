#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int interval(int a[100], int n) {
  int k = 0, i;
  for (i = 1; i <= n; i++) {
    if (a[1] < a[n]) {
      if (a[i] >= a[1] && a[i] <= a[n])
        k++;
    } else {
      if (a[n] < a[1])
        if (a[i] >= a[n] && a[i] <= a[1])
          k++;
    }
  }
  return k;
}
int main() {
  int i, a[101], n;
  f >> n;
  for (i = 1; i <= n; i++)
    f >> a[i];
  cout << interval(a, n);
  f.close();

  return 0;
}
