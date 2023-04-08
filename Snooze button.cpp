#include<bits/stdc++.h>
using namespace std;
#define sz(x) int((x).size())
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
#define fst ios::sync_with_stdio(0);cin.tie(0)
#define MOD 1000000007
/*
    * negative numbers
    * special cases n == 1?
    * number overflow
    * YES/NO/t -> solve
    * try different cases
*/

int main()
{
    int x;
    cin>>x;
    int h,m;
    cin>>h>>m;
    int y = 0;
    while(true)
    {
        if(h % 10 == 7 || m % 10 == 7)
        {
            cout<< y << endl;
            break;
        }
        y++;
        m -= x;
        if(m < 0)
        {
            m = 60 + m;
            h--;
            if(h == -1)
            {
                h = 23;
            }
        }
    }
    return 0;
}
