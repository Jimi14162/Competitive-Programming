#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m,q;
        cin>>m>>q;
        vector <int> vq,vc;
        string s;
        cin>>s;
        for(int i=0;i<q;i++)
        {
            int a;
            cin>>a;
            vq.push_back(a);
            
        }
        
        for(int k=0;k<q;k++)
        {
            int count=0;
            if(s.find("B")==-1)
            {
                count=vq[k];
            }
            else 
            {
                int size=0;
                while(vq[k])
                {
                    if(size>s.length())
                    {
                        size=0;
                    }
                    if(s[size]=='A')
                    {
                        vq[k]--;
                        count++;
                    }
                    else if(s[size]=='B')
                    {
                        vq[k]/=2;
                        count++;
                    }
                    size++;
                }
            }
            vc.push_back(count);
            
        }
        for(int i=0;i<q;i++) {
            cout<<vc[i]<<endl;
        }

    }


    return 0;
}