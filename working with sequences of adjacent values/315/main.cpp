/**
Program description: Finds the sequences of numbers
that are coprime. It finds only those of maximum length
Ex: 2 3 5 15 16 25 17
Output: One sequence of 4 numbers.(15 16 25 17)
*/

#include <iostream>
#include <fstream>
using namespace std;
//file open
ifstream f("date.in");
//gcd
int cmmdc(int x,int y)
{

    if(x==y)
        return x;
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y-=x;
    }

    return x;
}
int main()
{
    int i,k=1,km=1,nr=1;
    int v[100],n;
    //file read
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];
    //file print
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";

    for(i=0; i<n-1; i++)
    {
        if(cmmdc(v[i],v[i+1])==1)
        {
            k++;
            if(k>km)
            {
                km=k;
                nr=1;
            }
            else if(k==km)
                nr++;
        }
        else
            k=1;
    }
    cout<<endl;
    if(nr==1)
        cout<<"One sequence of "<<km<<" numbers";
    else
        cout<<nr<<" sequences of "<<km<<" numbers";
    f.close();
    return 0;
}
