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
    ll n , k , x , y ; cin >> n >> k >> x >> y ; 
    ll  mn = y ; 
    char grid[n+1][n+1]  ;
    for(ll i=y;i>=1;i-=k)
    {
        mn = min(mn,i) ; 
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            grid[i][j] = '.' ;
        }
    }
    
    // upper level 

    ll col = mn ; 

    for(ll i=x;i>=1;i--)
    {
        for(ll j=col;j<=n;j+=k)
        {
            grid[i][j] = 'X' ;    
        }
        col--;
        if(col==0)col = k ; 
    }

    // lower level 
    y=mn+1 ;
    x++ ; 
    // cout << y << nl ; 
    for(ll i=x;i<=n;i++)
    {
        if(y==k+1)y=1;
        for(ll j=y;j<=n;j+=k)
        {
            grid[i][j] = 'X' ; 
        }
        y++;
    }

    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cout << grid[i][j];
        }
        cout << nl;
    }


}

int main()
{
   FastRead;
   tc()
    solve();
}