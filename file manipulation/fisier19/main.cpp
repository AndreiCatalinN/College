/**
Program description: counts the ordered sequences of
maximum length
Author: Andrei Negura
IDE: Code Blocks
*/
#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int main() {
  int x, y, k = 1, kmax = 0, a;

  f >> x;
  while (f >> y) {
    if (x <= y) {
      k++;
      if (k > kmax) {
        kmax = k;
        a = 1;
      } else if (kmax == k)
        a++;
    }

    else
      k = 1;

    x = y;
  }
  cout << "Max length is " << kmax << endl;
  cout << a << " sequences of max length.";
  f.close();
  return 0;
}
