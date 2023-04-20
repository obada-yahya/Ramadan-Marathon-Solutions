#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    s.push_back('k');
    int cnt = 0;
    int total = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'x')
        {
            cnt++;
        }
        else
        {
            total += max(cnt - 2,0);
            cnt = 0;
        }
    }
    cout<< total << endl;
    return 0;
}
