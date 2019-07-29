#include <fstream>
#include <iostream>
using namespace std;
ifstream f("date.in");
void inserare(int v[100], int &n, int p, int x) {
  int i;
  n++;
  for (i = n; i >= p + 1; i--)
    v[i] = v[i - 1];
  v[p] = x;
}
int main() {
  int v[101], n, i, a[3] = {3, 2, 1}, j;
  f >> n;
  for (i = 1; i <= n; i++) {
    f >> v[i];
    cout << v[i] << " ";
  }
  cout << endl;
  /**  for(i=1;i<=n;i++)
        if(v[i]==0)
            { inserare(v,n,i+1,1);
                inserare(v,n,i+2,2);
                inserare(v,n,i+3,3);}
    for(i=1;i<=n;i++)
            cout<<v[i]<<" ";**/

  cout << endl;
  for (i = 1; i <= n; i++)
    if (v[i] == 0)
      for (j = 0; j < 3; j++)
        inserare(v, n, i + 1, a[j]);
  for (i = 1; i <= n; i++)
    cout << v[i] << " ";

  f.close();
  return 0;
}
