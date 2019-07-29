#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");

int main() {
  int i, k = 0, a, v[10], n;
  f >> n;
  for (i = 1; i <= n; i++)
    f >> v[i];
  for (i = 1; i <= n; i++)
    if (v[1] >= v[i])
      k++;

  cout << k;

  f.close();
  return 0;
}
