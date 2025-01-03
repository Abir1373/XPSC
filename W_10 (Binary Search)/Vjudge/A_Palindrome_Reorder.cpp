// Bismillahir Rahmanir Raheem

// author : VaLEnT_DouLoS ( Abir ) 

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
#define nl '\n'
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
#define pii pair<ll,ll>
#define vll vector<ll>

void solve()
{
    string cur ; cin >> cur ; 
    map<char,ll>mp ; 
    ll len = sz(cur) ; 
    for(ll i=0;i<len;i++)
    {
        mp[cur[i]]++ ; 
    }
    ll cnt = 0 ;
    char ch = '+' ; 
    for(auto i: mp)
    {
        if(i.s&1)
        {
            cnt++ ; 
            ch = i.f ; 
            if(cnt>1)
            {
                cout << "NO SOLUTION" ; 
                return ;
            }
        }
    }
    string ans = "" , tmp = "" ; 
    for(auto i: mp)
    {
        ll div = i.s/2 ; 
        string now(div,i.f) ; 
        ans+=now ; 
    }
    len = sz(ans) ; 
    for(ll i=len-1;i>=0;i--)
    {
        tmp+=ans[i] ;
    }
    if(cnt)
    {
        ans = ans + ch + tmp ;
    }
    else ans = ans + tmp ; 
    cout << ans << '\n' ;
}

signed main()
{
   FastRead;
//    tc()
    solve();
}