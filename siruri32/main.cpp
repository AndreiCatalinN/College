#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char t[1000] = "ana are trei papuci cu pufroz";
  char *s;
  char d[] = " ";
  s = t;
  s = strtok(s, d);
  while (s != 0) {
    cout << strrev(s) << " ";
    s = strtok(NULL, d);
  }
  return 0;
}
