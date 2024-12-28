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
    bool isPrime = true ; 
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isPrime = false ; 
        }
    } 
    if(isPrime)
    {
        cout << 1 ; return ; 
    }
    if(n%2==0)
    {
        cout << 2 ; return ; 
    }
    else 
    {
        ll num = n - 2 ; 
        isPrime = true ; 
        for(ll i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                isPrime = false ; 
            }
        }
        if(isPrime)
        {
            cout << 2 ; return ; 
        }
        cout << 3 ;
    }
}

signed main()
{
   FastRead;
//    tc()
    solve();
}