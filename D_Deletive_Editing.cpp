#include<bits/stdc++.h>

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
        string a,b;
        cin>>a>>b;
        int ind=a.find_last_of(b[b.length()-1]);
        int bind;
        int flag=1;
        for(int i=b.length()-2;i>=0;i--)
        {
            bind=a.find_last_of(b[i]);
            if(bind > ind)
            {
                flag=0;
                cout<<"NO\n";
                break;
            }
            else
            {
                flag=1;
                cout<<"ind = "<<ind<<" bind="<<bind<<"\n";
                ind=bind;
            }
        }
        if(flag)
            cout<<"YES\n";
    } 
    return 0;
}