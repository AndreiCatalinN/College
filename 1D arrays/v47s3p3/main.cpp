#include <fstream>
#include <iostream>
using namespace std;
ifstream f("bac.txt");
int putere(int x, int k)
{
    if (x < k)
        return x;
    if (x == 1)
        return 1;

    while (x != 1 && x % k == 0)
    {
        x = x / k;
    }

    return x;
}
int main()
{
    int n, k, v[100], i, ok = 0;
    f >> n;
    f >> k;
    for (i = 1; i <= n; i++)
        f >> v[i];
    for (i = 1; i <= n; i++)
        if (putere(v[i], k) == 1)
        {
            cout << v[i] << " ";
            ok = 1;
        }
    if (ok == 0)
        cout << "Nu.";
    f.close();
    return 0;
}
