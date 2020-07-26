#include <cstring>
#include <iostream>
using namespace std;
int inserare(char s[21], int k, char c, int &n)
{
    int i;
    n++;
    for (i = n; i > k + 1; i--)
        s[i] = s[i - 1];
}
int main()
{
    char s[21];
    int n, i, j, k;
    cin >> s;
    n = strlen(s);
    for (i = 0; i < n; i++)
        if (strchr("aeiou", s[i]) != 0)
            cout << s;

    return 0;
}
