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
    ll n = 8 ; char grid[n][n] ; 
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin >> grid[i][j] ; 
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll b = 0 , r = 0 ; 
            if(grid[i][j]=='B')
            {
                for(ll k=0;k<n;k++)
                {
                    b+=(grid[i][k]=='B');
                }
                if(b==8)
                {
                    cout<<"B\n";
                    return ;
                }
                b = 0 ; 
                for(ll k=0;k<n;k++)
                {
                    b+=(grid[k][j]=='B') ;
                }
                if(b==8)
                {
                    cout<<"B\n";
                    return ;
                }
            }
        }
    }
    cout << "R\n";
}

int main()
{
   FastRead;
   tc()
    solve();
}