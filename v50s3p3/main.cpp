#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int divxy(int x, int y) {
  int aux;
  if (x < y) {
    aux = x;
    x = y;
    y = aux;
  }
  if (x % y == 0)
    return 1;
  else
    return 0;
}

int main() {
  int a, b, n, aux, i, ok = 0;
  f >> a >> b >> n;

  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  }
  for (i = a; i <= b; i++)
    if (divxy(n, i) == 1 && i <= n)
      cout << i << " ";
    else
      ok = 0;
  if (ok == 0)
    cout << "Nu exista";
  f.close();
  return 0;
}
