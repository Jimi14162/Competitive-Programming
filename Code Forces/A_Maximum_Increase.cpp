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
    vector<ll int> v;
    vector <int > count;
    for(int i=0;i<t;i++)
    {
        ll int temp;
        cin>>temp;
        v.pb(temp);
    }
    int c=0;
    for(int i=1;i<t;i++)
    {
        if(v[i] > v[i-1])
        {
            c++;
        }
        else
        {
            count.pb(c);
            c=0;
        }
    }
    count.pb(c);
    int max=*max_element(all(count));
    cout<<max+1;
    return 0;
}