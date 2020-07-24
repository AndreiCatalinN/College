#include <iostream>

using namespace std;
int prim ( int x, int i)
{
    if(i<x/2)
       {if(x%i==0)
            return 1;
                else
                if(x%i!=0) return 0;

        return prim(x, i+1);}
}
int main()
{int i=1,x;
cin>>x;
    cout<< prim(x, i);

    return 0;
}
