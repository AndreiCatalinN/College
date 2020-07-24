#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
 void cmax(int a, int &b)
 { b=a%10; a=a/10;
     while(a!=0)
     {
         if(b<a%10)
            b=a%10;
         a=a/10;
     }
 }
int main()
{
    int x,y,max=-1,p=30000;

    while(f>>x)
    {
      cmax(x,y);
        if(max<y)
            {max=y; p=x;}
        if(  max==y && x<p)
            p=x;


    }
    cout<<max<<" "<<p;
        f.close();
    return 0;
}
