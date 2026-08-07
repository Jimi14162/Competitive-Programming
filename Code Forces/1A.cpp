#include<iostream>
using namespace std;
int main()
{
    unsigned long long int l,b,a;
    cin>>l>>b>>a;
    unsigned  long int d=0,c=0;
    unsigned long long int c1=0,c2=0;
    if(a==1)
    {
        cout<<l*b;
    }
    else {
    while(d<l)
    {
        d+=a;
        c1++;
    }
    while(c<b)
    {
        c+=a;
        c2++;
    }
    cout<<c1*c2;    
    }


    return 0;
}