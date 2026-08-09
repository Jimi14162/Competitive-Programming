#include<bits/stdc++.h>

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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a=0,b=0;
        if(s.find("1")==-1)
        {
            cout<<"0 0\n";
        }
        else if(s.find("0")==-1)
        {
            cout<<n<<" "<<n<<"\n";
        }
        else
        {
            int a=0,b=0;
            while(k-- && s.find("10")!=-1)
            {
                int i=0;
                    if(s[i]=='1' && i<2*n)
                    {
                        if(i==(2*n-1))
                        {
                            i=-1;
                        }
                        if(s[i+1]=='1')
                        {
                            if(i%2)
                            {
                                b++;
                            }
                            else
                            {
                                a++;
                            }
                        }
                        else
                        {
                            s[i]='0';
                            s[i+1]='1';
                            if((i+1)%2)
                            {
                                b++;
                            }
                            else
                            {
                                a++;
                            }

                        }
                    }
                    i++;
            }
            cout<<a<<" "<<b<<"\n";
        }
    }   
    return 0;
}