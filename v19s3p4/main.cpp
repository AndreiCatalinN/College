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
       cout<<a<<" ";
       n--;
       f>>a;
   }
   else {if( b<a)
     {
         cout<<b<<" ";m--; g>>b;}
     }
    if(a==b)
     {
         n--;m--;cout<<a<<" ";f>>a;g>>b;
     }}
     if(n!=0)
     while(n!=0)
     {cout<< a<<" ";n--; f>>a;}
    if(m!=0)
     while(m!=0)
     {cout<<b<<" "; m--; g>>b;}
    f.close();
    g.close();
    return 0;
}
