#include <iostream>
#include <fstream>
using namespace std;
ifstream f("nr1.txt");
ifstream g("nr2.txt");
int main()
{
    int a, b, n ,m ;

   f>>n;
   g>>m;
   f>>a;
   g>>b;

   while(n!=0 && m!=0)
   {
    if(a<b)
   {

       n--;
       f>>a;
   }
   else {if( b<a)
     {
         m--; g>>b;}
     }
    if(a==b)
     {
         n--;m--;cout<<a<<" ";f>>a;g>>b;
     }}

    f.close();
    g.close();
    return 0;
}
