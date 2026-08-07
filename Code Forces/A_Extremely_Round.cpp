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
        int temp;
        cin>>temp;
        if(temp<10)
        {
            cout<<temp<<"\n";
        }
        else if(temp>=10 && temp<100)
        {
            cout<<9+temp/10<<"\n";
        }
        else if(temp>=100 && temp<1000)
        {
            cout<<18+temp/100<<"\n";
        }
        else if(temp>=1000 && temp<10000)
        {
            cout<<27+temp/1000<<"\n";
        }
        else if(temp>=10000 && temp<100000)
        {
            cout<<36+temp/10000<<"\n";
        }
        else if(temp>=100000 && temp<1000000)
        {
            cout<<45+temp/100000<<"\n";
        }
    }
    return 0;
}