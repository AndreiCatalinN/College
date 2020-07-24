#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char e[100];
    int i,n,s,c;
    cin>>e;
    n=strlen(e);
    s=e[0]-'0';
    for(i=1; i<n; i=i+2)
    {
        c=e[i+1]-'0'; cout<<i<<endl;
            if(e[i]=='+')
                s=s +c;
            else if(e[i]=='-')
                s=s - c;
    }
    cout<<"Expresia: "<<s;
    return 0;
}
