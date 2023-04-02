#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pii;
#define sz(x) ll((x).size())
//#define endl '\n'
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
int convert_time(string time)
{
    int hour = stoi(time.substr(0,2));
    int minutes = stoi(time.substr(3,2));
    return hour * 60 + minutes;
}
int main()
{
    fst;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string curr_time;
        cin>>curr_time>>n;
        int ans = INT_MAX;
        int my_sleep_time = convert_time(curr_time);
        for(int i = 0; i < n; i++)
        {
            string curr_alarm;
            cin>>curr_alarm;
            int curr_alarm_time = convert_time(curr_alarm);
            int temp = ( (curr_alarm_time - my_sleep_time) + 1440 ) % 1440;
            ans = min(ans, temp);
        }
        cout<< ans / 60 << " " << ans % 60 << endl;
    }
    return 0;

}
