#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<cmath>
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
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        int is_pair=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                is_pair++;
            }
        }
        if(is_pair==0)
        {
            cout<<n<<"\n";
        }
        else if(is_pair==n-1)
        {
            cout<<"1\n";
        }
        else
        {
            int count=0;
            for(int i=0;i<n-3;i++)
            {
                if(v[i]==v[i+1])
                {
                    if(v[i+2]!=v[i] && v[i+2]==v[i+3])
                    {
                        count=1;
                        swap(v[i+1],v[i+2]);
                    }
                }
            }
            if(count)
            {
                int cnt=0;
                for(int i=0;i<n-1;i++)
                {
                    if(v[i]==v[i+1])
                    {
                        cnt++;
                    }
                }
                cout<<n-cnt<<"\n";
            }
            else
            {

                for(int i=0;i<n-2;i++)
                {
                    if(v[i]==v[i+1])
                    {
                        if(i>0 && v[i-1] != v[i])
                        {
                            swap(v[i-1],v[i]);
                            break;
                        }
                        else
                        {
                            if(v[i+2] != v[i+1])
                            {
                                swap(v[i+1],v[i+2]);
                                break;
                            }
                        }
                    }
                }
                int cnt=0;
                for(int i=0;i<n-1;i++)
                {
                    if(v[i]==v[i+1])
                    {
                        cnt++;
                    }
                }
                cout<<n-cnt<<"\n";
            }
        }
    }   
    return 0;
}