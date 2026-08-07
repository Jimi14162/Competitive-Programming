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
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int temp;
            cin>>temp;
            sum+=temp;
        }
        cout<<-sum<<"\n";

    }   
    return 0;
}