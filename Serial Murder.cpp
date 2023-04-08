#include<bits/stdc++.h>
using namespace std;
int main()
{
    string f, l;
    cin>>f>>l;
    cout<<f<<" "<<l<<'\n';
    int n;
    cin>>n;
    string killed, replaced;
    for(int i = 0; i < n; i++)
    {
        cin>>killed>>replaced;
        if(f == killed)
        {
            f = replaced;
        }
        else
        {
            l = replaced;
        }
        cout<< f <<" "<< l<<'\n';
    }

    return 0;
}
