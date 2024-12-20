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
    map<tuple<ll,ll,ll>,ll>mp ;
    mp[{0ll,0ll,0ll}] = 0ll ;  
    mp[{0ll,0ll,1ll}] = 1ll ;  
    mp[{0ll,1ll,0ll}] = 0ll ;  
    mp[{0ll,1ll,1ll}] = -1ll ;  
    mp[{1ll,0ll,0ll}] = -1ll ;  
    mp[{1ll,0ll,1ll}] = 0ll ;  
    mp[{1ll,1ll,0ll}] = 1ll ;  
    mp[{1ll,1ll,1ll}] = 0ll ;  

    ll a = 0 , b , c , d ; 
    cin >> b >> c >> d ; 
    for(ll i=60;i>=0;i--)
    {
        ll one = ((b>>i)&1) ; 
        ll two = ((c>>i)&1) ; 
        ll three = ((d>>i)&1) ; 
        ll val = mp[{one,two,three}] ; 
        if(val==-1)
        {
            cout << -1 << nl ; 
            return ;
        }
        else {
            a+=val*(1ll<<i) ; 
        }
    }
    cout << a << nl ; 
}

int main()
{
   FastRead;
   tc()
    solve();
}