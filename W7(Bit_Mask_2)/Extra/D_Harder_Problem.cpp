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
    ll n ; cin >> n ; 
    vll v(n+1) ; 
    map<ll,ll>mp ; 
    for(ll i=1;i<=n;i++)
    {
        ll p ; cin >> p ; 
        if(!mp.count(p))
        {
            mp[p] = i ; 
        }
    }
    vector<pii>cmp ; 
    for(auto i: mp)
    {
        cmp.pb({i.s,i.f}) ;
    }
    vll ans ; 
    all(cmp);
    ll len = sz(cmp) ; 
    map<ll,ll>have ; 
    for(ll i=0;i<len;i++)
    {
        cout << cmp[i].s << ' ';
        have[cmp[i].s]++ ; 
    }
    ll mx = 1e18 ; 
    n-=len;
    for(ll i=1;i<=mx && n ; i++)
    {
        if(have[i])continue;
        cout << i << ' ';
        n--; 
    }
    cout << nl; 
}

int main()
{
   FastRead;
   tc()
    solve();
}