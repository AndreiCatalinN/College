#include <iostream>
#include <fstream>
using namespace std;

void aranjare(float a[101], int n)
{
    int i,j;
    float b[101],aux;
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
}
ifstream f("date.in");
int main()
{
    int n,i;
    float a[101], b[101];
    f>>n;
    for(i=1; i<=n; i++)
        f>>b[i];
    aranjare(b,n);
    for(i=1; i<=n; i++)
        cout<<b[i]<<" ";

    f.close();
    return 0;
}
