#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
ifstream f("date.in");
struct data
{
    int zi, luna, an;
};
struct persoana
{
    data d;
    char nume[31];
};

int main()
{
    int n,i;
    persoana a[50];
    f>>n;
    for(i=0; i<n; i++)
    {
        f.getline(a[i].nume);
        f.getline();
        f.getline();
        f>>a[i].d.zi>>a[i].d.luna>>a[i].d.an;
    }

    f.close();
    return 0;
}
