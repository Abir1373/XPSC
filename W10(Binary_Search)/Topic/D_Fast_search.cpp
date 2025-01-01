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
    ll n ; cin >> n ; 
    vll v(n) ; 
    for(ll i=0;i<n;i++)
    {
        cin>>v[i] ; 
    }
    all(v) ; 
    ll q ; cin >> q ; 
    while(q--)
    {
        ll lo , hi ; cin >> lo >> hi ; 
        ll l  = 0 , r = n-1 , ansL , ansR ; 
        while(l<=r)
        {
            ll m = (l+r)>>1 ; 
            if(v[m]<lo)
            {
                l = m+1 ; 
            }
            else 
            {
                r = m-1 ; 
            }
        }
        ansL = l ; 
        l = 0 , r = n - 1 ; 
        while(l<=r)
        {
            ll m = (l+r)>>1 ; 
            if(v[m]<=hi)
            {
                l = m+1 ; 
            }
            else 
            {
                r = m-1 ; 
            }
        }  
        ansR = r ; 
        if(ansL>ansR)
        {
            cout << 0 << ' ' ; 
        }
        else 
        {
            cout << ansR - ansL + 1 << ' ' ;
        }
    }

}

signed main()
{
   FastRead;
//    tc()
    solve();
}