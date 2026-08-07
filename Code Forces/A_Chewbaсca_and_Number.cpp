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
    long long int a;
    cin>>a;
    vector <int > v;
    while(a!=0)
    {
        int temp=a%10;
        if((temp > 4))
        {
            v.pb(9 -temp);
            
        }
        else
        {
            v.pb(a%10);
        }
        a/=10;
    }
    if(v[v.size()-1]==0)
    {
        v[v.size()-1]=9;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i];
    }
    return 0;
}