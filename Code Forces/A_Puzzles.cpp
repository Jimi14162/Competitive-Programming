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
    int s,size;
    cin>>s>>size;
    vector<int> v;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(all(v));
    vector <int > v1;
    for(int i=0;s+i-1<size;i++)
    {
        v1.pb(v[s-1+i]-v[i]);
    }
    int m= * min_element(all(v1));
    cout<<m;
    return 0;
}