#include <iostream>
#include <fstream>

using namespace std;
//Open file
ifstream f("date.in");

int main()
{
    int i, n, v[13], p, j;

    //Read from file
    f>>n;
    for(i=0;i<n;i++)
        f>>v[i];

    //Eliminate all even numbers from my 1D array
    for(i=0;i<n;i++)
        if( v[i]%2== 0 )
        {

            for(j=i;j<n;j++)
                v[j]=v[j+1];
            //Decrease the size of the array
            n--;
            //Decrease i so you won't skip consecutive even numbers
            i--;
        }

    //Print array
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";

    //Close file
    f.close();
    return 0;
}
