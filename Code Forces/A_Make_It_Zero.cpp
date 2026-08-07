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
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        if(n%2)
        {
            cout<<"4\n";
            cout<<"1 2\n";
            cout<<"1 2\n";
            cout<<2<<" "<<n<<"\n";
            cout<<2<<" "<<n<<"\n";
        }
        else
        {
            cout<<2<<"\n";
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";
        }
    }   
    return 0;
}