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
    ll n ; 
    cin >> n ; 
    pii a[n+1] ; 
    vll pre(n+1,0) , tmp(n+1) ; 
    for(ll i=1;i<=n;i++)
    {
        cin >> a[i].f ; 
        a[i].s = i ; 
    }
    sort(a+1,a+n+1) ; 
    tmp[n] = n-1 ;  
    vll ans(n+1) ; 
    ans[a[n].s] = tmp[n] ;  
    for(ll i=1;i<=n;i++)
    {
        pre[i] = pre[i-1] + a[i].f ; 
    }
    for(ll i=n-1;i>=1;i--)
    {
        if(pre[i]>=pre[i+1]-pre[i])
        {
            tmp[i] = tmp[i+1] ; 
        }
        else tmp[i] = i-1 ; 
        ans[a[i].s] = tmp[i] ; 
    }
    for(ll i=1;i<=n;i++)
    {
        cout << ans[i] << (i==n ?'\n':' ');
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}