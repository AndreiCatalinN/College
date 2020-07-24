#include <iostream>
#include <cstring>
using namespace std;

int main()
{char a[31],b[31],c,d;
int na, nb,i,j;
cin>>a;
cin>>b;
na=strlen(a);
nb=strlen(b);
for(i=na-2, j=1;i>=0, j<=nb;i--, j++)
    {
        c=a[i]; d=b[j];
        a[i]=0; b[j]=0;

        if(strcmp(a,b)==0)
            cout<<a<<" ";
        a[i]=c;b[j]=d;

    }



    return 0;
}
