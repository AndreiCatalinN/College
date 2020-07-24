#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{   char s[256];
    int n,i;

f.getline(s,256);
n=strlen(s); i=0;
while(i<n)
    if(s[i]==' ' && s[i+1]==' ')
      strcpy(s+i, s+i+1);
else i++;

    cout<<s;
f.close();
    return 0;
}
