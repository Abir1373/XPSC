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
#define clr(x,y) memset(x,y,sizeof(x))
#define pii pair<ll,ll>
#define vll vector<ll>

ll dp[40][8000] ; 

ll fun(ll n,ll k,ll x,ll tot)
{
    if(x==n)
    {
       return (tot == k) ? 1 : 0;
    } 
    if(dp[x][tot]!=-1)
    {
        return dp[x][tot];
    }
    ll one = fun(n,k,x+1,tot+10) ; 
    ll two = fun(n,k,x+1,tot+11) ; 
    ll three = fun(n,k,x+1,tot+12) ;
    return dp[x][tot] = max({one || two || three}) ; 
}

void solve()
{
    ll n , k ; 
    cin >> n >> k ;
    ll x=0,tot=0; 
    memset(dp,-1ll,sizeof(dp)) ; 
    cout << (fun(n,k,x,tot) ? "YES":"NO") << '\n' ; 
}

int main()
{
   FastRead;
   tc()
    solve();
}