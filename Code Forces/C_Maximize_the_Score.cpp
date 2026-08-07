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
        int n;
        cin>>n;
        vector<int> v1,v2,diff;
        for(int i=0;i<2*n;i++)
        {
                int temp;
                cin>>temp;
                if(i<n)
                    v1.pb(temp);
                else
                    v2.pb(temp);
        }

    }   
    return 0;
}