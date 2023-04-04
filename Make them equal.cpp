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
    string a,b;
    cin>>a>>b;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while(i >= 0 && j >= 0)
    {
        if(a[i] == b[j])
        {
            i--;
            j--;
        }
        else break;
    }
    cout<< i + j + 2 << endl;
    return 0;

}
