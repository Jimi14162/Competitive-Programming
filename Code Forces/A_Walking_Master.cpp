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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)
            cout<<"-1\n";
        else
        {
            int count=0;
            while(b!=d)
            {
                a++;
                b++;
                count++;
            }
            if(a<c)
            {
                cout<<"-1\n";
            }
            else 
            {
                count += a-c;
                cout<<count<<"\n";
            }
        }
    }   
    return 0;
}