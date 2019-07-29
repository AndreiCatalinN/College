#include <iostream>

using namespace std;
int i, k;
void factor(int n) {
  if (n > 1) {
    i = 1;
    k = 0;
    if (n % i == 0)
      k++;
    cout << i << " " << k << endl;
    factor(n / i);
  }
}

int main() {
  factor(360);

  return 0;
}
