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
        int c=n%10,count=0;
        int ans=(c-1)*10;
        while(n!=0)
        {
            count++;
            ans+=count;
            n/=10;
        }
        cout<<ans<<"\n";
        
    }   
    return 0;
}