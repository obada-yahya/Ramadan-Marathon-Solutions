#include<bits/stdc++.h>
using namespace std;
#define sz(x) int((x).size())
#define endl '\n'
typedef long long ll;
int main()
{
    long long n,x,y,i,h,t;
    cin>>n>>x>>y>>i>>h>>t;
    int cnt = 0;
    ll pos = i;
    ll giant = 0;
    bool ans = true;
    while(pos + x < h)
    {
        if(pos + x <= giant + y)
        {
            if(n <= 0)
            {
                ans = false;
                break;
            }
            else
            {
                cnt++;
                pos += x * t;
                n--;
            }
        }
        else
        {
            pos += x;
            giant += y;
        }
    }
    if(ans)
    {
        cout<< "Thank god! they made it" << endl;
        cout<< cnt << endl;
    }
    else
    {
        cout<< "May they rest in peace" << endl;
    }
    return 0;
}
