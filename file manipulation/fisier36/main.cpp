#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
int div(int x)
{
   int i,k=1;
  for(i=2;i<=x/2;i++)
    if(x%i==0)
        k++;
  return k;
}
int main()
{
    int x,y,a,n,m;
    f>>x>>y;
    a=div(x)+div(y);
    while(f>>x>>y)
    {
        if(a<=div(x)+div(y))
           {

            a=div(x)+div(y);
            n=x; m=y;}
    }
cout<< n<<" "<<m;
    return 0;
}
