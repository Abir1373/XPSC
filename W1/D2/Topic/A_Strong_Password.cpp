#include <bits/stdc++.h>

using namespace std ; 

#define f first
#define s second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ll long long int
#define ld long double
#define ed endl
#define B begin
#define rb rbegin
#define E end
#define re rend
#define bs binary_search
#define ub upper_bound
#define lb lower_bound
#define tc() long long int test_case ; cin >> test_case ; while(test_case--)
#define cout(a) cout << a << endl
#define all(v) sort(v.begin(),v.end())
#define rall(v) sort(v.rbegin(),v.rend())
#define rev(v) reverse(v.begin(),v.end())
#define sz(s) s.size() ;
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define inf INT_MAX ;
#define clr(x,y) memset(x,y,sizeof x)

void solve()
{
    string ss ; 
    cin >> ss ; 
    ll len = sz(ss) ; 
    ll index = -1 ,pnt = 0; 
    for(ll i=0;i<len-1;i++)
    {
        if(ss[i]==ss[i+1])
        {
            index = i ;
            pnt++;
            break ; 
        }
    }
    if(index==-1)
    {
        index = 0 ; 
    }
    char ch = 'a' ; 
    while(ch==ss[index])ch++;

    if(pnt==0)
    {
        ss = ch + ss ; 
        cout << ss << '\n' ; 
        return ;
    }
    string ans = "";
    for(ll i=0;i<=index;i++)ans+=ss[i];
    ans+=ch;
    for(ll i=index+1;i<len;i++)
    {
        ans+=ss[i];
    }
    cout<<ans<<'\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}