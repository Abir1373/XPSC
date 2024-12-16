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
    ll n , k ; cin >> n >> k ; 
    ll len = k*2 ; 
    vll a(n) , b(n) ; 
    map<ll,ll>m1,m2 ; 
    vll lf , rg ; 
    ll cnt = 0 ; 
    for(ll i=0;i<n;i++)
    {
        cin>>a[i] ;
        m1[a[i]]++ ; 
        if(m1[a[i]]==2 && k)
        {
            lf.pb(a[i]) ; 
            lf.pb(a[i]) ; 
            m1[a[i]] = 0 ;  
            k--;
            cnt++ ; 
        }
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i] ;
        m2[b[i]]++ ; 
        if(m2[b[i]]==2 && cnt)
        {
            rg.pb(b[i]) ;
            rg.pb(b[i]) ;
            m2[b[i]] = 0 ; 
            cnt--;
        }
    }
    if(k)
    {
        ll req = len - (lf.size()) ;  
        for(ll i=0;i<n;i++)
        {
            if(m1[a[i]]==1 && req)
            {
                lf.pb(a[i]) ; 
                rg.pb(a[i]) ; 
                req--;
            }
        }
    }
    for(ll i=0;i<len;i++)
    {
        cout << lf[i] << " \n"[i==len-1] ; 
    }
    for(ll i=0;i<len;i++)
    {
        cout << rg[i] << " \n"[i==len-1] ; 
    }

}

int main()
{
   FastRead;
   tc()
    solve();
}