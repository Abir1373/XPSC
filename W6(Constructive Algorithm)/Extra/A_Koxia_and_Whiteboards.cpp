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
    priority_queue<ll>pq ; 
    for(ll i=0,p;i<n;i++)
    {
        cin>>p ; 
        pq.push(p*-1) ; 
    }   
    for(ll i=0,p;i<m;i++)
    {
        cin>>p ; 
        pq.pop() ; 
        pq.push(p*-1) ; 
    }
    ll ans = 0 ; 
    while(!pq.empty())
    {
        ll a = -pq.top() ; 
        ans+=a; 
        pq.pop() ; 
    }
    cout << ans << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}