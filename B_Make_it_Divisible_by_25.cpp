#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define al(x) (x).length()
#define all(x) (x).begin(), (x).end()

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        ll int ind0,ind5;
        ind0=s.find_last_of("0");
        ind5=s.find_last_of("5");
        if(ind0 > ind5)
        {
                ll slen=al(s);
                s.erase(ind0,al(s));
                ll temp=s.find_last_of("05");
                if(temp!=-1)
                {
                    cout<<(slen-temp-2)<<"\n";
                }
        }
        else
        {
            ll slen=al(s);
            s.erase(ind5+1,al(s));
            ll temp=s.find_last_of("27");
            if(temp!=-1)
                cout<<slen-temp-2<<"\n";
            else
            {
                s.erase(ind0,al(s));
                ll temp=s.find_last_of("05");
                cout<<slen-temp-2<<"\n"; 
            }
        }
    }   
    return 0;
}