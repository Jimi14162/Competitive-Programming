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
        ll count;
        if(a>b)
        {
            if(a%2)
            {
                a--;
                count=(a*a)+b;
            }
            else
            {
                count=(a*a)-b+1;
            }
        }
        else
        {
            if(b%2)
            {
                count=(b*b)-a+1;
            }
            else
            {
                b--;
                count=(b*b)+a;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}