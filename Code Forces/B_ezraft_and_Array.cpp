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
        if(a==1)
        {
            cout<<1<<endl;
        }
        else if(a==2)
        {
            cout <<-1<<endl;
        }
        else 
        {
            cout<<1<<" "<<2<<" ";
            ll b=3;
            for(int i=0;i<a-2;i++)
            {
                cout<<b<<" ";
                b*=2;
            }
            cout<<"\n";
        }
    }
    return 0;
}