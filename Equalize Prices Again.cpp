#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define lp(i,s,f) for(ll i = s; i < ll(f); i++)
#define inF freopen("input.in", "r", stdin);
#define outF freopen("output.in", "w", stdout);
#define endl '\n'
#define MOD 1000000007
#define mm(arr) memset(arr, 0, sizeof(arr))
#define F first

int main(){
    FAST
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            sum += a;
        }
        cout << (sum + n - 1)/n << endl;
    }
    return 0;
}
