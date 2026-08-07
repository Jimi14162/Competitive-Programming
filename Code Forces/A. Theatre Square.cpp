#include<iostream>
using namespace std;
int main()
{
    int m,n,a;
    cin>>m>>n>>a;
    int check,sum=0;
    if(a==1 || m==1 || n==1)
        sum+=m*n;
    else 
    {
        if(m%(a)==0)
            sum+=m/a;
        else
            sum+=(m/a)+1;
        if(n%(a)==0)
            sum+=n/a;
        else
            sum+=(n/a)+1;
    }
    cout<<sum;
    return 0;
}