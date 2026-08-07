#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int m;
    cin>>m;
    vector <string> v;
    for(int i=0;i<m;i++)
    {
        int n,k,count=0,count0=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                count++;
            }
            else
            {
                count0++;
            }
            if(count>2)
            {
                break;
            }
        }
        if(count0==n)
        {
            v.push_back("YES");
        }
        else if(count!=2)
        {
            v.push_back("NO");
        }
        else
        {
            int f=s.find_first_of('1');
            int l=s.find_last_of('1');
            if(l-f!=k)
            {
                v.push_back("NO");
            }
            else
            {
                v.push_back("YES");
            }
        }
        
    }
    for(int i=0;i<v.size();i++)
        {   
            cout<<v[i]<<endl;
        }
}