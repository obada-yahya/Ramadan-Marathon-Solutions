#include <iostream>
using namespace std;

#include<stack>
#include<queue>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include <functional>
#include<map>
#include<iomanip>
#include<cmath>
#include<list>
#include<fstream>




#define fst ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef unsigned long long ull;
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vll vector<ll>
#define vvll vector<vll>
#define sz(v) v.size()
#define eline "\n"
#define lessqueue priority_queue<int, vector<int>, greater<int> >

#define mm(arr) memset(arr, 0, sizeof(arr))

#define fltor(s,x) lower_bound(s.rbegin(), s.rend(), x, greater<int>())

#define MOD 1e9+7
#define two2n(n) (1<<n)
constexpr auto PI = 3.14159265358979323846;;
constexpr auto mod = 1000000007;
#define oo 1e18


bool ispow(ull x)
{
	return (x != 0) && ((x & (x - 1)) == 0);
}

ll fastpow(ull v, ull p) {
	if (p == 0)return 1;
	if (p == 1)return v;

	ull ans = fastpow(v, p / 2);
	ans *= ans;
	ans %= mod;
	if (p & 1)return (ans * v) % mod;
	else return ans;
}


bool issset(ll n, ll k)
{
	if (n & ((ll)1 << (k - 1)))
		return true;
	else
		return false;
}


ull gcd(ull a, ull b)
{
	if (b)
		return gcd(b, a % b);
	else
		return a;
}

ll lcm(ull a, ull b)
{
	return (a * b) / gcd(a, b);
}

bool ispal(ll x)
{
	ll rev = 0;
	for (ll i = x; i > 0; i /= 10)
		rev = rev * 10 + i % 10;

	return (x == rev);
}


template <typename T>
vector <T> factorize(T x) {
	vector <T> ans;
	while (x % 2 == 0) {
		ans.push_back(2);
		x /= 2;
	}
	for (T i = 3; i * i <= x; i += 2) {
		while (x % i == 0) {
			ans.push_back(i);
			x /= i;
		}
	}
	if (x != 1) {
		ans.push_back(x);
	}
	return ans;
}








template <typename T>
vector <T> primefactors(T x) {
	map<T, int>mp;
	vector <T> ans;
	while (x % 2 == 0) {
		if (mp[2] == 0)
		{
			ans.push_back(2);
			mp[2] = 1;
		}
		x /= 2;
	}
	for (T i = 3; i * i <= x; i += 2) {
		while (x % i == 0) {
			if (mp[i] == 0)
			{
				ans.push_back(i);
				mp[i] = 1;
			}
			x /= i;
		}
	}
	if (x != 1) {
		if (mp[x] == 0)
			ans.push_back(x);
	}
	return ans;
}

bool isprime(ll n)
{
	if (n == 1)
		return false;
	if (n == 2)
		return true;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}


bool isSuffix(const string& s1, const string& s2)
{
	if (s2.length() > s1.length())
	{
		return false;
	}

	int n = s1.length();
	int m = s2.length();

	for (int i = n - 1, j = m - 1; j >= 0; i--, j--)
	{
		if (s1[i] != s2[j])
		{
			return false;
		}
	}
	return true;
}




/*
bool how(const string& a, const string& b)
{
	string f = a + b, s = b + a;
	return (f > s);
}
*/
/*
void binx(ll n)
{
	if (n > 1)
		binx(n / 2);

	xbin.push_back(n % 2);
}
*/



bool how(const pair<ll, ll>& a, const pair<ll, ll>& b)
{
	return (a.second < b.second);
}




vector<int>adj[5000];
vector<bool> visited(5000, 0);
vi poss(5000, 0);

int dfs(int x, int val, int start)
{
	if (visited[x])
	{
		val--;
	}

	visited[x] = true;

	int best = val;

	while (poss[x] < adj[x].size())
	{
		if (visited[adj[x][poss[x]]])
		{
			poss[x]++;
			continue;
		}


		poss[x]++;
		best = max(best, dfs(adj[x][poss[x] - 1], val + 1, start));
	}

	return best;
}




int main()
{

	//freopen("king.in", "r", stdin);
	//freopen("king.out", "w", stdout);

	fst;

	
	int t;
	cin >> t;
	while (t--)
	{

		int  a, b, n;
		cin >> a >> b >> n;

		if (n % a == 0 || n % b == 0)
		{
			cout << "YES" << endl;
			continue;
		}


		int k = n;
		bool ok = false;

		while (n > 0 || k > 0)
		{
			n -= a;
			k -= b;

			if (n >= 0 && n % b == 0)
			{
				ok = true;
				break;
			}

			if (k >= 0 && k % a == 0)
			{
				ok = true;
				break;
			}

		}

		if (ok)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;

	}
	return 0;
}
