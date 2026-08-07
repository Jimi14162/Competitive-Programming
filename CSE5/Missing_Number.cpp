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
    ll int n,sum=0,sum1=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int t;
        cin>>t;
        sum1+=i;
        sum+=t;
    }
    sum1+=n;
    cout<<sum1-sum;
    return 0;
}