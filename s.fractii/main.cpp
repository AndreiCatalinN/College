/*
Program description: Program that adds, simplifies and multiplies fractions
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>

using namespace std;
ifstream f("date.in");
// Fraction struct
struct fractie {
  int x, y;
  void afisare() { cout << x << "/ " << y << endl; }
};

// Prototypes
int cmmdc(int x, int y);
fractie simplifica(fractie f);
fractie produs(fractie f1, fractie f2);

int main() {
  int n, i;
  fractie p = {1, 1}, a[100];

  fractie c = {5, 10};

  f >> n;
  // Read fractions from file and print them
  for (i = 1; i <= n; i++) {
    f >> a[i].x >> a[i].y;
    a[i].afisare();
  }

  // Calculates the product between p and the file fractions
  for (i = 1; i <= n; i++)
    p = produs(p, a[i]);
  // Multiplies all the fractions
  cout << endl << p.x << "/" << p.y;
  f.close();
  return 0;
}

int cmmdc(int x, int y) {
  if (x == y)
    return x;
  while (x != y)
    if (x > y)
      x = x - y;
    else
      y = y - x;
  return x;
}

fractie simplifica(fractie f) {
  int d = cmmdc(f.x, f.y);
  f.x = f.x / d;
  f.y = f.y / d;
  return f;
}

fractie produs(fractie f1, fractie f2) {
  fractie p;
  p.x = f1.x * f2.x;
  p.y = f1.y * f2.y;
  p = simplifica(p);
  return p;
}
