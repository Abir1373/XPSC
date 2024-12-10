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
#define pii pair<ll,ll>
#define vll vector<ll>

void solve()
{
    ll n ; cin >> n ; 
    vll v(n+1) ;
    map<ll,vll>mp ;  
    for(ll i=1;i<=n;i++)
    {
        cin >> v[i] ; 
        mp[v[i]].pb(i) ; 
    }
    ll ans = 1e18 ; 
    pii Ans ; 
    for(auto it: mp)
    {
        vll a = it.s ; 
        ll len = sz(a) ; 
        ll mx = -1e18 ; 
        for(ll i=0;i<len-1;i++)
        {
            ll d = (a[i+1]-a[i]-1) ; 
            ll div = d/2 + (d&1 && d>=1) ; 
            mx = max(div,mx) ; 
        }
        ll one , two ; 
        one = a[0]-1 ; 
        two = n-a[len-1] ; 
        mx = max({one,two,mx}) ; 
        // cout << mx << '\n' ;
        if(mx<ans)
        {
            ans = mx ; 
            Ans.f = it.f ; 
            Ans.s = ans ; 
        }
    }
    cout << Ans.f << ' ' << Ans.s << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}