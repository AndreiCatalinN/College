#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int v[10], n;
int main() {
  int ok = 0, i;
  f >> n;
  for (i = 1; i <= n; i++) {
    f >> v[i];
    if ((v[i] % 2 == 0 && v[i + 1] % 2 == 1) ||
        (v[i] % 2 == 1 && v[i + 1] % 2 == 0))
      ok = 1;
  }
  if (ok == 1)
    cout << "Da.";
  else
    cout << "Nu.";
  f.close();
  return 0;
}
