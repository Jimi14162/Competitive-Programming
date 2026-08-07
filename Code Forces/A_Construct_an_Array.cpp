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
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        for(int i=1;i<=a*2;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}