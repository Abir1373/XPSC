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
#define pi pair<ll,ll>

bool cmp(pi a,pi b)
{
    return a.s>=b.s ; 
}

void solve()
{
    ll n , k ; 
    cin >> n >> k ;
    map<ll,ll>mp ;  
    while(k--)
    {
        ll a , b ; 
        cin >> a >> b ; 
        mp[a]+=b;
    }
    vector<pi>v ; 
    for(auto i: mp)
    {
        v.pb({i.f,i.s}) ; 
    }
    sort(v.begin(),v.end(),cmp) ;
    ll len = sz(v) ; 
    len = min(len,n) ; 
    ll tot = 0 ; 
    for(ll i=0;i<len;i++)
    {
        tot+=v[i].s ; 
    }
    cout << tot << '\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}