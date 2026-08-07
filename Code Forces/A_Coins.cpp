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
        long long int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            if(k%2==0)
            {
                cout<<"NO\n";
            }
            else if((n-k)%2==0 || n%k==0 || n%(k+2)==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }    
   return 0;
}