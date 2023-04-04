#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
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
int main()
{
    int n,k;
    cin>>n>>k;
    int weights[n];
    for(int i = 0; i < n; i++)
    {
        cin>>weights[i];
    }
    sort(weights, weights + n);
    int cnt = 0;
    int left = 0;
    int right = n - 1;
    while(left <= right)
    {
        int weight = weights[left] + weights[right];
        if(weight <= k)
        {
            left++;
            right--;
        }
        else
        {
            right--;
        }
        cnt++;
    }
    cout<< cnt << endl;
    return 0;

}
