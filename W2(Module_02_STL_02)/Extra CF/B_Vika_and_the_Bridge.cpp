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
    ll n , k ; 
    cin >> n >> k ; 
    vector<ll>v(n+1) ; 
    vector<ll>last(k+1,0) ; 
    vector<priority_queue<ll>>cnt(k+1) ; 
    ll lastvalue ; 
    for(ll i=1;i<=n;i++) {
        cin >> v[i] ; 
        if(i==n) {
            lastvalue = v[i] ; 
        }
        if(last[v[i]]==0)
        {
            if(i==1) {
                cnt[v[i]].push(0) ; 
            }
            else {
                ll d = i-1 ; 
                cnt[v[i]].push(d) ; 
            }
        }
        else {
            ll d = i-last[v[i]]-1 ; 
            cnt[v[i]].push(d) ; 
        }
        last[v[i]] = i ; 
    }
    for(ll i=1;i<=k;i++) {
        if(i==lastvalue) {
            cnt[i].push(0) ; 
        }
        ll d = n-last[i] ; 
        cnt[i].push(d) ; 
    }
    for(ll i=1;i<=k;i++) {
        ll tp = cnt[i].top() ;
        cnt[i].pop() ;  
        tp/=2 ; 
        cnt[i].push(tp) ; 
    }  
    ll mn = 1e18 ; 
    for(ll i=1;i<=k;i++) {
        ll tp = cnt[i].top() ; 
        mn = min(tp,mn) ; 
    }
    cout << mn <<  '\n' ; 
}

int main()
{
   FastRead;
   tc()
    solve();
}