/**
Program description: Determine the number of elements contained
 by the longest sequence of adjacent elements that are even numbers.
If there is more than one, the number of sequences will be printed
 Author: Andrei Negura
 IDE: Code Blocks
 Date: 21/08/2018
*/

#include <iostream>
#include <fstream>
using namespace std;
//file open
ifstream f("date.in");

int main()
{
    int i,k=1,km=1,nr=1;
    int v[100],n;
    //file read
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    //file print
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";

    //Determine sequences
    for(i=1; i<n; i++)
    {
        if(v[i]%2==0 && v[i+1]%2==0)
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
        else k=1;
    }

    //Print results
    cout<<endl;
    if(nr==1)
        cout<<km;
    else
        cout<<nr<<" sequences, "<<km<<" elements";
    f.close();
    return 0;
}
