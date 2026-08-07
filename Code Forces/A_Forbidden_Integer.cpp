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
        int n,a,b;
        cin>>n>>a>>b;
        if(b!=1)
        {
            cout<<"YES\n";
            cout<<n<<"\n";
            for(int i=0;i<n;i++)
            {
                cout<<"1 ";
            }
            cout<<"\n";
        }
        else if(a==1 && b==1)
        {
            cout<<"NO\n";
        }
        else
        {
            if(n%2!=0 && a==2)
            {
                cout<<"NO\n";
            }
            else if(n%2==0)
            {
                cout<<"YES\n";
                cout<<n/2<<"\n";
                for(int i=0;i<n/2;i++)
                {
                    cout<<"2 ";
                }
                cout<<"\n";
            }
            else
            {
                cout<<"YES\n";
                n-=3;
                cout<<(n/2)+1<<"\n";
                cout<<"3 ";
                for(int i=0;i<n/2;i++)
                {
                    cout<<"2 ";
                }
                cout<<"\n";            
            }
        }
        
    }   
    return 0;
}