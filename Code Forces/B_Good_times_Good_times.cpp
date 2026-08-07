#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<cmath>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        ll b;
        cin>>b;
        ll temp=b;
        int ex=0;
        while(temp!=0)
        {
            ex++;
            temp/=10;
        }
        ll mul=pow(10,ex)+1;
        cout<<mul<<"\n";
    }
    return 0;
}