#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pii;
#define sz(x) ll((x).size())
#define endl '\n'
#define fst ios::sync_with_stdio(0);cin.tie(0);
#define MOD 1000000007
#define all(v) v.begin(), v.end()
/*
 * negative numbers
 * special cases n == 1?
 * number overflow += -=
 * YES/NO/t -> solve
 * try different cases
 * don't stick with the first idea (think twice code once)
 * don't try this at home
 */
template <typename T> void printVector(vector<T> x)
{
    for(T ele : x)
    {
        cout<< ele << " ";
    }
    cout<<endl;
}
ll fstpow(ll x, ll y)
{
    if(y == 0) return 1;
    ll kk = fstpow(x, y / 2) % MOD;
    kk *= kk;
    kk %= MOD;
    if(y % 2) kk *= x;
    kk %= MOD;
    return kk;
}
const int N = 100005;
int dis[N];
int find(int a)
{
    if(dis[a] == a)
        return a;
    return dis[a] = find(dis[a]);
}
int main()
{
//    fst;
    int t = 1;
//    cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin>>s>>k;
        set<char> st;
        int days = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(st.size() == k && !st.count(s[i]))
            {
                days++;
                st.clear();
            }
            st.insert(s[i]);
        }
        cout<< days << endl;
    }
    return 0;

}
