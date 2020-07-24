/* Program description: Program that calculates second grade ecuations even with imaginary numbers.
Author: Andrei Negura
OS:win 10
Date: 21/12/2016
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    x1 and x2 are the roots of the ecuation
    d stands for delta
    a, b and c are the values of the ecuation deltasq for imaginary values.
    */
    float a,b,c;
    float x1,x2, d, deltasq;
    cout<<"Form of the ecuation: ax^2 +bx + c=0"<<endl;
    cout<<"Please introduce a !=0"<<endl;
    cout<<"a=";
    cin>>a;

    cout<<"b=";
    cin>>b;

    cout<<"c=";
    cin>>c;

    //Delta
    d=b*b -4*a*c;
    cout<<d<<endl;
    //Roots if Delta>0
    if(d>0)
    {
        x1=(-b+sqrt(d))/2*a;
        x2= (-b-sqrt(d))/a*2;
        cout<<"x1="<<x1<<" x2="<<x2<<endl;
    }
    //Roots if delta=0
    else if(d==0)
    {
        x1=-b/2*a;
        cout<<"x1="<<x1<<endl;
    }
    //Roots if delta<0
    else if(d<0)
    {
        deltasq= sqrt(-d)/2*a;
        x1=-b/2*a;
        x2=-b/2*a;

        cout<<"x1="<<x1<<" + ("<<deltasq<<")"<<"i"<<endl;
        cout<<"x2="<<x2<<" - ("<<deltasq<<")"<<"i";
    }

    return 0;
}
