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
    char grid[n+1][n+1] ; 
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin >> grid[i][j] ; 
        }
    }
    char one , two , three , four ; 
    one = grid[1][2] ; 
    two = grid[2][1] ; 
    three = grid[n-1][n] ; 
    four = grid[n][n-1] ; 
    vector<pii>ans ; 
    if(one==two)
    {
        if(one==three)
        {
            ans.pb({n-1,n}) ; 
        }
        if(one==four)
        {
            ans.pb({n,n-1}) ; 
        }
    }
    else if(three==four)
    {
        if(three==one)
        {
            ans.pb({1,2}) ; 
        }
        if(three==two)
        {
            ans.pb({2,1}) ; 
        }
    }
    else 
    {
        ans.pb({1,2}) ; 
        if(one!=three)
        {
            ans.pb({n-1,n}) ; 
        }
        else ans.pb({n,n-1}) ;
    }
    ll len = sz(ans) ; 
    cout << len << nl ; 
    if(len)
    {
        for(ll i=0;i<len;i++)
        {
            cout << ans[i].f << ' ' << ans[i].s << "\n"; 
        }
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}