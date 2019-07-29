#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");

int main() {
  int i, n, a[100], j;
  f >> n;
  for (i = 1; i <= n; i++)
    f >> a[i];

  for (i = 1; i < n; i++)
    for (j = i + 1; j <= n; j++)
      if ((a[i] % 2 == 0 && a[j] % 2 == 0) ||
            (a[i] % 2 == 1 && a[j] % 2 == 1))
        cout << a[i] << " " << a[j] << endl;
  f.close();
  return 0;
}
