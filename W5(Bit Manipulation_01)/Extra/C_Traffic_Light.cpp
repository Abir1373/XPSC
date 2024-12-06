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

void fun(vll a,vll b,ll n)
{
    ll mx = 0 ; 
    for(auto i: a)
    {
        auto x = lower_bound(b.begin(),b.end(),i) ; 
        if(x==b.end())
        {
            ll d = b[0] + (n-i) ;
            mx = max(mx,d) ; 
        }
        else 
        {
            ll d = *x-i ;
            mx = max(mx,d) ; 
        }
    }
    cout << mx << '\n' ;
}

void solve()
{
    ll n ; 
    char ch ; 
    string s ; 
    cin >> n >> ch >> s ; 
    vll g,y,r ; 
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='y')y.pb(i+1) ;
        else if(s[i]=='g')g.pb(i+1) ;
        else if(s[i]=='r')r.pb(i+1) ;
    }
    if(ch=='r')
    {
        fun(r,g,n) ;
    }
    else if(ch=='y')
    {
        fun(y,g,n) ; 
    }
    else if(ch=='g')
    {
        ll mx = 0 ; 
        ll x = g.size() ; 
        if(x==1)
        {
            cout << 0 << '\n' ;
            return ;
        } 
        else fun(g,g,n) ; 
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}