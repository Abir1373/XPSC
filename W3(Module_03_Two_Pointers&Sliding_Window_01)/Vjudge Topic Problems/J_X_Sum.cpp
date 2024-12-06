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
    ll n , m ; 
    cin >> n >> m ; 
    ll grid[n+1][m+1] ; 
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
        {
            if(i==0||j==0)
            {
                grid[i][j]=0 ; 
            }
            else cin>>grid[i][j] ; 
        }
    }
    ll mx=-1e18 ; 
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            ll cur = 0 ;
            ll x=i,y=j ; 
            while(x>=1 && x<=n && y>=1 && y<=m)
            {
                cur+=grid[x][y] ; 
                x--;
                y++;
            }
            x=i,y=j ; 
            while(x>=1 && x<=n && y>=1 && y<=m)
            {
                cur+=grid[x][y] ; 
                x++;
                y--;
            }
            x=i,y=j ; 
            while(x>=1 && x<=n && y>=1 && y<=m)
            {
                cur+=grid[x][y] ; 
                x--;
                y--;
            }
            x=i,y=j ; 
            while(x>=1 && x<=n && y>=1 && y<=m)
            {
                cur+=grid[x][y] ; 
                x++;
                y++;
            }
            cur-=grid[i][j]*3;
            mx = max(mx,cur) ; 
        }
    }
    cout << mx << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}