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
    vll v(n) ; 
    for(ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
        if(v[i]<0)
        {
            ll rem = ((v[i] % n) + n) % n ;
            v[i] = rem ; 
        }
        else 
        {
            v[i] %= n ;
        }
    }
    ll ans = 0 , sum = 0 ;
    map<ll,ll>hv ;  
    hv[0]++ ; 
    for(ll i=0;i<n;i++)
    {
        sum += v[i] ;
        ll rem ;  
        if(sum>=0)
        {
            rem = sum % n ; 
        }
        else 
        {
            rem = ((rem%n)+n) % n ; 
        }
        if(hv[rem])
        {
             ans+=hv[rem] ; 
        }
        hv[rem]++ ; 
    }
    cout << ans << '\n' ;
}

signed main()
{
   FastRead;
//    tc()
    solve();
}