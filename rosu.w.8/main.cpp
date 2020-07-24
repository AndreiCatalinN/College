#include <iostream>

using namespace std;

int main()
{int x,x1,ok=0,k=0,m=0;
  cin>>x;
x1=x;
while(x!=0)
{
    k++;x=x/10;
}
x=x1;
  while(x>0)
  {
      if(x/10%10<=x%10)
        m++;

      x=x/10;
  }
  if(m==k)
    cout<<"Da.";
  else cout<<"Nu.";
    return 0;
}
