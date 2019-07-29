#include <fstream>
#include <iostream>

using namespace std;
ifstream f("bac.txt");
int main() {
  int n, ok = 0, x;
  cin >> n;
  while (f >> x) {
    if (x % n == 0) {
      cout << x << " ";
      ok = 1;
    }
  }
  cout << endl;
  if (ok == 0)
    cout << "Nu exista.";
  return 0;
}
