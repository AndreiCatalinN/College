#include <iostream>

using namespace std;

void sterge(int v[100], int &n, int i, int j) {
  int k, l;
  k = j - i + 1;
  while (k > 0) {
    for (l = i; l < n; l++)
      v[l] = v[l + 1];
    n--;
    k--;
  }
}

int main() {
  int n, v[100], i, j;
  cout << "n=";
  cin >> n;
  for (i = 1; i <= n; i++)
    cin >> v[i];

  i = 1;
  while (i <= n)
    if (v[i] == v[i + 1])
      sterge(v, n, i, i);
    else
      i++;

  for (i = 1; i <= n; i++)
    cout << v[i] << " ";
}
