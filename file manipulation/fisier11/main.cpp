#include <iostream>
#include <fstream>
/**11.	Să se afişeze antepenultimul număr prim din fişieruldate.in care memorează numere întregi cu cel mult 4 cifre fiecare.**/
using namespace std;
ifstream f("date.in");
int prim(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
            return 1;
    return 0;

}
int main()
{
  int x, u=0, pn=0,pnn=0;

    while(f>>x)
  {
      if(prim(x)==0)
        {pnn=pn; ///antepenultimul
            pn=u;/// penultimul
      u=x;}/// ultimul
  }
  cout<<pnn;
  return 0;
}
