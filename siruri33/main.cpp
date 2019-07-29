#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream f("date.in");
  char a[256] = "Ana are mere pere si ";

  char s[256], d[] = " ", *c, *e;
  int ok = 1;
  strcpy(s, a);
  c = strtok(a, d);
  e = strtok(s, d);
  e = strtok(s, d);
  while (s != 0) {
    if (stricmp(c, e) > 0)
      ok = 0;
    c = strtok(NULL, d);
    e = strtok(NULL, d);
  }
  if (ok == 0)
    cout << "nu e ordonat";
  else
    cout << "ordonat";
  f.close();
  return 0;
}
