#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        set<char>t;
        cin>>s;
        int low=s[0],high=s[0];
        for(int i=0;i<s.size();i++)
        {
            t.insert(s[i]);
            if(s[i]<low)
            {
                low=s[i];
            }
            else if(s[i]>high)
            {
                high=s[i];
            }
        }
        if(s.size()+low-1==high && s.size()==t.size())
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
