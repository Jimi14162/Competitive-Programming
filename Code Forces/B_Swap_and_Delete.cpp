#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int a1=0,a0=0;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='1')
            {
                a1++;
            }
           
            
        }
        a0=s.length()-a1;
        if(a1==a0)
        {
            cout<<0<<endl;
        }
        else 
        {
            int b0=a0;
            int b1=a1;
            for(int i=0;i<s.length();i++)
            {
                if(a0==0)
                {
                    if(s[i]=='1')
                    {
                        cout<<a1<<endl;
                        break;
                    }
                    else
                    {
                        a1--;
                    }
                }
                else if(a1==0)
                {
                    if(s[i]=='0')
                    {
                        cout<<a0<<endl;
                        break;
                    }
                    else
                    {
                        a0--;
                    }
                }
                else if(s[i]=='1')
                {
                    a0--;
                }
                else if(s[i]=='0')
                {
                    a1--;
                }
            }
        }
        /*if(a1==s.length() || a0==s.length())
        {
            cout<<s.length()<<"\n";
        }
        else if(s.length()==1)
        {
            cout<<1<<"\n";
        }
        else if(a1==a0)
        {
            cout<<0<<endl;
        }
        else {
            int count=0;
            for(int i=0;i<s.length()/2;i++)
            {
                if(s[i]!=s[s.length()-i-1])
                {
                    count++;
                }

            }
            if(count%2==0)
            {
                cout<<(s.length()-count*2)*2<<"\n";
            }
            else
            {
                cout<<s.length()-count*2<<"\n";
            }
        }*/
    }


    return 0;
}