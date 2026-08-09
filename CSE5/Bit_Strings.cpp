#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin>>n;
    ll int ans;
    ll mod=pow(10,9);
    mod+=7;
    if(n<63)
    {
        ans=pow(2,n);
        
        cout<<(ans % mod); 
    }
    else
    {
        ll int sum=0;
        ans=pow(2,62);
        for(int i=0;i<n/62;i++)
        {
            sum+=(ans%mod);
        }
        if(n%62 !=0)
        {
            ans=pow(2,n - (n/62)*62);
            sum+=(ans%mod);
        }
        cout<<sum;
    }
      
    return 0;
}