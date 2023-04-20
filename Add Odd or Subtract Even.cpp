#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == b) cout << 0 << endl;
		else cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
	}
	
	return 0;
}
