#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int fr(int n) {}
int main() {
  int i, v[101], n, u[101];
  f >> n;
  for (i = 2; i <= n; i++) {
    f >> v[i];
    if (v[i - 1] == v[i]) {
      j = i;
    }
  }
  for (i = 1; i <= n; i++)
    cout << "Numarul " << v[i] << " cu frecventa " << fr[i] << "." << endl;
  f.close();
  return 0;
}
