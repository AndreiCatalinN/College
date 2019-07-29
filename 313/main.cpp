/*
Program description: Determine the number of elements contained
 by the longest sequence of adjacent elements that have exactly 2 digits.
 In case there is more than one sequence, only the first one will be printed
 Author: Andrei Negura
 IDE: Code Blocks
 Date: 21/08/2018
*/
#include <fstream>
#include <iostream>
using namespace std;
// file open
ifstream f("date.in");

int main() {
  int i, k = 1, km = 1, poz = 0, first = 1;
  int v[100], n;
  // file read
  f >> n;
  for (i = 0; i < n; i++)
    f >> v[i];
  for (i = 0; i < n; i++)
    cout << v[i] << " ";

  for (i = 0; i < n - 1; i++) {
    if ((v[i] > 9 && v[i] < 100) && (v[i + 1] > 9 && v[i + 1] < 100)) {
      k++;
      if (k > km) {
        if (first--)
          poz = i + 1;
        km = k;
      }
    } else
      k = 1;
  }

  cout << endl << km << endl;

  for (i = poz - km + 1; i < poz + 1; i++)
    cout << v[i] << " ";
  f.close();
  return 0;
}
