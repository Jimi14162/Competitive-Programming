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
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(n==2)
        {
            if(s[0]=='?' && s[1]=='?')
                cout<<"4\n";
            else if(s[0]=='?' || s[1]=='?')
            {
                cout<<"2\n";
            }
            else
                cout<<"1\n";
        }
        else if(n==3)
        {
            if(s.find_first_of("01")==-1)
            {
                cout<<"4\n";
            }
            else if((s[0]=='?' && s[1]=='?') || (s[0]=='?' && s[2]=='?') || (s[2]=='?' && s[1]=='?'))
            {
                cout<<"2\n";
            }
            else
            {
                if(s[0]=='?' || s[2]=='?')
                {
                    cout<<"1\n";
                }
                else if(s[1]=='?' && (s[0]!=s[2]))
                {
                    cout<<"2\n";
                }
                else
                {
                    if((s[0]=='0' && s[2]=='1') || (s[0]=='1' && s[2]=='0'))
                    {
                        cout<<"1\n";
                    }
                    else
                    {
                        cout<<"0\n";
                    }
                }
            }
        }
        else
        {
            int ways = 1;
            for(int i = 0; i < 2; i++)
            {
                int last = -1;
                char lv = '?';

                for(int j=i;j<n;j+=2)
                {
                    if(s[i] == '?')
                        continue;

                    if(last == -1)
                    {
                        last = i;
                        lv = s[i];
                    }
                    else
                    {
                        int steps = (i - last) / 2;
                        if((steps % 2 == 0 && s[i] != lv) ||
                           (steps % 2 == 1 && s[i] == lv))
                        {
                            ways = 0;
                            break;
                        }

                        last = i;
                        lv = s[i];
                    }
                }

                if(ways == 0)
                    break;
                if(last == -1)
                    ways *= 2;
            }

            cout << ways << '\n';
        }
    }   
    return 0;
}