/*
Program description: Inputs an array and finds
the rows of identical numbers which have the maximum length
Ex: array[] = { 1,1,1, 2,2,2,2 }
Output: One row of 4 numbers
    array[] = { 1,1,1,1, 2,2,2,2 }
Output: 2 rows of 4 numbers
Author: Andrei Negura
IDE: Code Blocks

*/

#include <iostream>
#include <fstream>
using namespace std;
//file open
ifstream f("date.in");


int main()
{
    int v[100],n;
    // k is the number of elements in a row
    // km is the maximum number of elements
    int i,k=1,km=1,nr=1;
    //file read
    f>>n;
    for(i=0; i<n; i++)
        f>>v[i];

    //array print
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";

    for(i=0; i<n; i++)
    {
        if(v[i]==v[i+1])
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
    cout<< endl;
    if(nr==1)
        cout<<"One row of "<<km<<" numbers";
    else
        cout<<nr<<" rows of "<<km<<" numbers";
    f.close();
    return 0;
}
