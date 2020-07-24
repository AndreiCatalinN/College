#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream f("date.in");
int fr['Z'+1];
int main()
{   char s[256];
    int n,i;
    f.getline(s,256);

    n=strlen(s);
    for(i=0;i<=n;i++)
        if(isalpha(s[i])!=0)
        {s[i]=toupper(s[i]);
            fr[s[i]]++;}
    for(i='A';i<='Z';i++)
        if(fr[i]!=0)
        cout<<(char) i<<" "<<fr[i]<<endl;

    f.close();
    return 0;
}
