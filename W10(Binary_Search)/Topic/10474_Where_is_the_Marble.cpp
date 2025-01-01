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
    ll n , q ; 
    ll test_case = 1 ; 
    while(1)
    {
        cin >> n >> q ; 
        if(n==0 && q==0)
        {
            break ; 
        }
        vll v(n) ; 
        for(ll i=0;i<n;i++)
        {
            cin >> v[i] ; 
        } 
        all(v) ; 
        cout << "CASE# " << test_case++<<":\n";
        while(q--)
        {
            ll num ; cin >> num ; 
            ll lo = 0 , hi = n - 1 ; 
            while(lo<=hi)
            {
                ll m = (lo + hi) >> 1 ; 
                if (v[m] >= num)
                {   
                    hi = m - 1 ; 
                }   
                else 
                {
                    lo = m + 1 ; 
                }
            }
            if(v[lo]==num)
            {
                cout << num << " found at " << lo+1 << '\n' ; 
            }
            else 
            {
                cout << num << " not found\n" ; 
            }
        }
    }
}

signed main()
{
   FastRead;
//    tc()
    solve();
}