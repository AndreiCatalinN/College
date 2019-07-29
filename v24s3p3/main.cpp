#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
void p(int n, int x[101], int &mini, int &maxi, int &sum) {
  int max = -10000, min = 10000, s = 0;
  for (int i = 1; i <= n; i++) {
    if (max < x[i])
      max = x[i];
    if (min > x[i])
      min = x[i];
    s = s + x[i];
  }
  maxi = max;
  mini = min;
  sum = s;
}
int main() {
  int n, i, x[101], maxi, mini, sum;
  f >> n;

  for (i = 1; i <= n; i++)
    f >> x[i];
  p(n, x, mini, maxi, sum);
  cout << mini << " " << maxi << " " << sum << endl;
  sum = (float)sum / n;
  for (i = 1; i <= n; i++) {
    if (x[i] == maxi)
      sum = sum - (float)x[i] / n;
    if (x[i] == mini)
      sum = sum - x[i] / n;
  }
  cout << sum;
  f.close();
  return 0;
}
