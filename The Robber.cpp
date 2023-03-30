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
    fst;
    int n,k;
    cin>>n>>k;
    int v[n];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int left = 0;
    int right = n - 1;
    while(left < n)
    {
        if(v[left] <= k)ans++;
        else break;
        left++;
    }
    while(right > left)
    {
        if(v[right] <= k)ans++;
        else break;
        right--;
    }
    cout<< ans << endl;
    return 0;

}
