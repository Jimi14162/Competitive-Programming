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
        int count=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp%2!=0)
                count++;
        }
        if(count%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }   
    return 0;
}