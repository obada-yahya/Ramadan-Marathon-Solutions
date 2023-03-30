#include<bits/stdc++.h>
using namespace std;
#define sz(x) int((x).size())
#define endl '\n'
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    set<int> t;
    int temp;
    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        t.insert(temp);
    }
    cout<<t.size()<<endl;
    return 0;
}
