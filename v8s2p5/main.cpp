#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int i, j, n, p, a[25][25], k = 1;
  cin >> n >> p;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= p; j++) {
      a[i][j] = k * k;
      k = k + 2;
    }
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= p; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  f.close();
  return 0;
}
