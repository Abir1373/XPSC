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

bool cmp(pii a,pii b)
{
    return a.s<b.s ; 
}

void solve()
{
    ll n , m ; 
    cin >> n >> m ; 
    ll grid[n][m] ;  
    deque<pii>dq ;
    clr(grid,0ll) ;  
    for(ll i=0;i<n;i++)
    {
        for(ll j=0,p;j<m;j++)
        {
            cin>>p ; 
            dq.pb({p,i}) ; 
        }
    }
    all(dq) ; 
    ll x = 0 ; 
    vector<pii>have ; 
    for(ll i=0;i<m;i++)
    {
        pii a = dq.front() ;
        dq.ppf() ; 
        grid[a.s][x++] = a.f ;
    }
    sort(dq.begin(),dq.end(),cmp) ;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(grid[i][j]==0)
            {
                cout << dq.front().f << ' ';
                dq.ppf() ; 
            }
            else cout << grid[i][j] << ' ' ; 
        }
        cout << '\n' ;
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}