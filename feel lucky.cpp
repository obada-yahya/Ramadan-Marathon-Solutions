#include<iostream>
using namespace std;
long long mn=1e12;
int number;
void lucky(long long val,int cnt)
{
    if(val>=1e11)
    {
        return ;
    }
    if(val>=number && cnt==0)
    {
        mn=min(val,mn);
    }
    lucky(val*10+4,cnt+1);
    lucky(val*10+7,cnt-1);
}
int main()
{
    cin>>number;
    lucky(0,0);
    cout<<mn<<'\n';
    return 0;
}
