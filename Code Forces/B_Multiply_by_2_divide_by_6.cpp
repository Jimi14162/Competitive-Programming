#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

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
        long long n;
        cin>>n;
        int count=0;
        while(n!=1)
        {
            if(n==2)
            {
                count=-1;
                break;
            }
            if(n%6==0)
            {
                n /=6;
            }
            else
            {
                n*=2;
                if(n%6!=0)
                {
                    count=-1;
                    break;
                }
                n/=6;
                count++;
            }
            count++;
        }  
        cout<<count<<"\n"; 
    }
    return 0;
}