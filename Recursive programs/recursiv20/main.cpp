#include <iostream>

using namespace std;
 int suma(int n)
 {
     if(n>0)
     {
         if(n%2==1)
            return n*2*n+suma(n-1);
                else
            return -n*2*n+suma(n-1);
     }
 }
int main()
{int n;
 cin>>n;
cout<< suma(n);
    return 0;
}
