#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a%2==0)
        {
            if(b%4==0)
            {
                cout<<a<<"\n";
            }
            else if(b%2==0)
            {
                cout<<a+1<<"\n";
            }
            else
            {
                if((b-1) % 4==0)
                {
                    cout<<a-b<<"\n";
                }
                else
                {
                    cout<<a+1+b<<"\n";
                }
            }
        }
        else
        {
            if(b%4==0)
            {
                cout<<a<<"\n";
            }
            else if(b%2==0)
            {
                cout<<a-1<<"\n";
            }
            else
            {
                if((b-1) % 4==0)
                {
                    cout<<a+b<<"\n";
                }
                else
                {
                    cout<<a-1-b<<"\n";
                }
            }
        }
    }   
    return 0;
}