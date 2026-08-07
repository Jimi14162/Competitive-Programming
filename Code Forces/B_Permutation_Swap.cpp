#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<numeric>
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
        int n,g=0;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            int temp;
            cin>>temp;
            g=gcd(g,abs(i-temp));
        }
        cout<<g<<"\n";
    }   
    return 0;
}