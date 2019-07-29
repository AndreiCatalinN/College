#include <iostream>

using namespace std;
int sub(int v[101], int n, int a) {
  int k = 0;
  int i;
  for (i = 1; i <= n; i++)
    if (v[i] < a)
      k++;
  return k;
}
int main() {
  int v[101], n, i, a, j, aux, k = 1;
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  for (i = 1; i <= n; i++)
    for (j = i + 1; j <= n; j++)
      if (v[i] > v[j]) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
  cout << endl;
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  cout << endl;
  for (i = 1; i <= n; i++)
    if (sub(v, i, v[i + 1]) != 0)
      k++;
  if (k == n)
    cout << "Da";
  else
    cout << "Nu";
  return 0;
}
