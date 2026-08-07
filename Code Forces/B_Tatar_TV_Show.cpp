#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m,k,check=1,count=0;
        string s;
        cin>>m>>k;
        cin>>s;
        int q=s.find("0"); 
        {
            while(s.find("1") != -1)
            {
                int pos=s.find("1");
                if(s[pos+k]=='1')
                {
                    s[pos]='0';
                    s[pos+k]='0';
                    check=1;
                }
                else if(s[pos+k]=='0')
                {
                    s[pos]='0';
                    s[pos+k]='1';
                    count++;
                }
                else if(pos==-1)
                {
                    check=1;
                    break;
                }
                if(count==(m) || (pos+k)>=m)
                {
                    check=0;
                    break;
                }
            }
            if(check)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }




    return 0;
}