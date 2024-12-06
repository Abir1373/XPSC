// Bismillahir Rahmanir Raheem

// author : !YELLALOT ( Abir ) 

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
    deque<ll>dq(n) ; 
    for(ll i=0;i<n;i++)
    {
        cin>>dq[i] ; 
    }
    deque<ll>ans ; 
    while(!dq.empty())
    {
        ll p = 0 ;  
        if(ans.empty())
        {
            ans.pb(dq.front()) ; 
            dq.ppf() ;
            p = 1 ;
        }
        ll a = ans.front() ; 
        ll b = ans.back() ;
        ll x = dq.front() ; 
        ll y = dq.back() ;
        if(x<=a && p==0)
        {
            ans.pf(x) ; 
            dq.ppf() ; 
            p = 1 ; 
        }
        else if(y<=a && p==0)
        {
            ans.pf(y);
            dq.ppb() ; 
            p = 1 ; 
        }
        else if(x>=b && p==0)
        {
            ans.pb(x) ; 
            dq.ppf() ; 
            p=1 ;
        }
        else if(y>=b && p==0)
        {
            ans.pb(y) ; 
            dq.ppb() ;
            p = 1 ;  
        }
        if(p==0)
        {
            cout << "No" << '\n' ; 
            return ;
        }
    }
    cout << "Yes" << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}