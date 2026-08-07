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
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v;
        v.pb(abs(a-b));
        v.pb(abs(b-c));
        v.pb(abs(a-c));
        int mi=*min_element(all(v));
        cout<<mi<<"\n";
    }
    return 0;
}