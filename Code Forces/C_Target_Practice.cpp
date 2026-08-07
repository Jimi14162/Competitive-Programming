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
    int n;
    cin>>n;
    while(n--)
    {
        char c[10][10];
        int sum=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='X')
                {
                    if(i<5 && j<5)
                    {
                        if(j>=i && j<5)
                        {
                            sum+=i+1;
                        }
                        else
                        {
                            sum+=j+1;
                        }
                    }
                    else if(i<5 && j>=5)
                    {
                        if(j>=5 && j<9-i)
                        {
                            sum+=i+1;
                        }
                        else
                        {
                            sum+=10-j;
                        }
                    }
                    else if(j>=5)
                    {
                        if(j>=5 && j<=i)
                        {
                            sum+=10-i;
                        }
                        else
                        {
                            sum+=10-j;
                        }
                    }
                    else
                    {
                        if(j>=9-i && j<=4)
                        {
                            sum+=10-i;
                        }
                        else
                        {
                            sum+=j+1;
                        }
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }   
    return 0;
}