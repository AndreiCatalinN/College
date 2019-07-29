#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int s = 0, i, n, v[100], min;
  f >> n;
  for (i = 1; i <= n; i++) {
    f >> v[i];
    if (v[i] >= 0)
      s = s + v[i];
  }
  if (s == 0) {
    min = v[1];
    for (i = 1; i <= n; i++)
      if (min < v[i])
        min = v[i];
    s = s + min;
  }
  cout << s;
  f.close();
  return 0;
}
