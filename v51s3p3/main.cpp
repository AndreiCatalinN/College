#include <iostream>
#include <cmath>
using namespace std;
int dist2(int xa,int ya, int xb, int yb)
{
    int val= (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
    return val;
}
int main()
{int x,y,z,w,a,b,c,d;


    cin>>x>>y>>z>>w>>a>>b>>c>>d;
    if(dist2(x,y,z,w)==dist2(x,y,c,d) && dist2(x,y,c,d)==dist2(a,b,c,d))
            cout<<"Da";
        else cout<<"nu";


    return 0;
}
