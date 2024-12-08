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
    ll n , k ; cin >> n >> k ; 
    map<ll,ll>mp ;
    vll v(n) ;  
    for(ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
        mp[v[i]]++ ; 
    }
    vector<pii>vc ; 
    for(auto i: mp)
    {
        vc.pb({i.f,i.s}) ; 
    }
    ll len = sz(vc) ;
    ll c = 0 , mx = 0 , l = 0 , r = 0 , cmp = -1 ; 
    pii ans ; 
    for(ll i=0;i<len;i++)
    {
        ll d = abs(vc[i].f-cmp) ; 
        cmp = vc[i].f ; 
        if(d!=1ll)
        {
            c = 0 ; 
            l = 0 ;
            r = 0 ; 
        } 
        if(vc[i].s<k)
        {
            c = 0 ; 
            l = 0 ; 
            r = 0 ;
            continue ; 
        }
        else 
        {
            c++ ; 
            if(c==1)
            {
                l = vc[i].f ; 
                r = vc[i].f ;
                if(c>=mx)
                {
                    mx = c ;
                    ans.f = l ; 
                    ans.s = r ; 
                }
            }
            else 
            {
                r = vc[i].f ; 
                if(c>=mx)
                {
                    mx = c ;
                    ans.f = l ; 
                    ans.s = r ; 
                }
            }
        }
    }
    if(mx==0)
    {
        cout << -1 << '\n' ; 
        return ; 
    }
    cout << ans.f << ' ' << ans.s << '\n' ;
}
int main()
{
   FastRead;
   tc()
    solve();
}