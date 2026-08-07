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
        ll int n;
        cin>>n;
        int flag=1;
        for(int i=n;i>=2;i--)
        {
            if((n+1)%i == 0)
            {
                flag=0;
                cout<<"NO\n";
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
    }   
    return 0;
}