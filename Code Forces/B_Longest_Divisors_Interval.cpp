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
        long long int n;
        cin>>n;
        int i=1;
        while((n%i)==0)
        {
            i++;
        }
        cout<<i-1<<"\n";
    }
    return 0;
}