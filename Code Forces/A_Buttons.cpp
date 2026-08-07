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
        long int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            if(c%2==0)
                cout<<"Second\n";
            else
                cout<<"First\n";
        }
        else
        {
            if(a>b)
                cout<<"First\n";
            else
                cout<<"Second\n";
        }
    }   
    return 0;
}