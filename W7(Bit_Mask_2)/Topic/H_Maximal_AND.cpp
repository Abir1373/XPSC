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
    ll n , k ; cin >> n >> k ; 
    vll cnt(31,0) , v(n) ; 
    for(ll i=0;i<n;i++)
    {
        cin>>v[i] ; 
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=30;j>=0;j--)
        {
            if(((v[i]>>j)&1)==0)
            {
                cnt[j]++ ; 
            }
        }
    }
    vll ind ; 
    for(ll i=30;i>=0;i--)
    {
        if(k>=cnt[i])
        {
            k-=cnt[i] ; 
            ind.pb(i) ; 
        }
    }
    ll len = sz(ind) ; 
    if(len)
    {
        for(ll i=0;i<n;i++)
        {
            for(auto it : ind)
            {
                v[i]|=(1<<it) ; 
            }
        }
    }
    ll ans = v[0] ;
    for(auto i: v)
    {
        ans&=i ; 
    }
    cout << ans << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}