#include <fstream>
#include <iostream>

using namespace std;
ifstream f("nr.txt");
int main() {
  int x, ok = 0;
  while (f >> x) {
    if (x > 99) {
      cout << x << " ";
      ok = 1;
    }
  }
  if (ok == 0)
    cout << "Nu exista.";
  return 0;
}
