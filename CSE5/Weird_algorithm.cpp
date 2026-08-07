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
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n*=3;
            n+=1;
        }
        cout<<n<<" ";
    }
    return 0;
}