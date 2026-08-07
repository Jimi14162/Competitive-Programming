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
        long long int a,b,n;
        int count=0;
        cin>>a>>b>>n;
        while(a<= n && b<=n)
        {
            if(a>b)
                b+=a;
            else
            {
                a+=b;
            }
            count++;
        }
        cout<<count<<"\n";
    }   
    return 0;
}