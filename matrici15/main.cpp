#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
int a[31][31], n, m;
void citire(int a[31][31]) {
  f >> m >> n;
  int i, j;
  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++)
      f >> a[i][j];
}
void maxim(int v[31]) {
  int i, j;
  for (i = 0; i <= 31; i++)
    v[i] = -10000;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= m; j++)
      if (v[i] < a[j][i])
        v[i] = a[j][i];
}
void suma(int s[31]) {
  int i, j;
  for (i = 0; i <= 31; i++)
    s[i] = 0;
  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++)
      s[j] += a[i][j];
}
int main() {
  int i, v[31], s[31];
  citire(a);
  maxim(v);
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
  cout << endl;
  suma(s);
  for (i = 1; i <= n; i++)
    cout << s[i] << " ";
  cout << endl;
  for (i = 1; i <= n; i++)
    if (v[i] == (s[i] - v[i]))
      cout << v[i] << " ";
  cout << endl;
  f.close();
  return 0;
}
