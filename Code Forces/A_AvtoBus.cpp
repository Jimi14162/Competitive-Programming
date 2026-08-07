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
    ll int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"-1\n";
    }
    else
    {
        if(n%6==0)
        {
            if(n%4==0)
            {
                cout<<n/6<<" "<<n/4<<"\n";
            }
            else
            {
                cout<<n/6<<" "<<(n/6)+1<<"\n";
            }
        }
        else if(n%4==0)
        {
            cout<<(n/6)+1<<" "<<n/4<<"\n";
        }
        else
        {
            cout<<(n/4)<<" "<<(n/4)<<"\n";
        }
    }
    return 0;
}