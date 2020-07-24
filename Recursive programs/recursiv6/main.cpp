#include <iostream>

using namespace std;
int max(int x, int &cm)
{
    if(x>0)
    {
        if(x%10<cm)
            {cm=x%10;
            return max(x/10,cm);}
    }

}
int main()
{int x,cm;
cin>>x;
cout<<max(x,cm);


    return 0;
}
