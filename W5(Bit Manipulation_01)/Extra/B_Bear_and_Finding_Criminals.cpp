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
    ll n , k ;
    cin >> n >> k ;
    vll v(n+1) ; 
    ll cnt = 0 , window = 0 ; 
    for(ll i=1;i<=n;i++)
    {
        cin >> v[i] ; 
    }
    if(v[k]==1)cnt++;
    window++;
    while(k-window>=1 || k+window<=n)
    {
        ll dir = 0 , robber = 0 ; 
        if(k-window>=1)
        {
            dir++;
            if(v[k-window]==1)robber++ ; 
        }
        if(k+window<=n)
        {
            dir++;
            if(v[k+window]==1)robber++ ; 
        }
        if(dir==robber)
        {
            cnt+=robber ; 
        }
        window++; 
    }
    cout << cnt << '\n' ;
}

int main()
{
   FastRead;
//    tc()
    solve();
}