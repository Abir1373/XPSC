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
    ll x1 , y1 , z1 , x2 , y2 , z2 ; 
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 ; 
    ll ans = 0 ; 
    while(z2)
    {
        ll mn = min(z2,x1) ; 
        z2-=mn ; 
        x1-=mn;
        mn = min(z2,z1) ;
        z2-=mn ; 
        z1-=mn ; 
        mn = min(z2,y1) ; 
        z2-=mn ; 
        y1-=mn;
        ans+=(mn*-2) ; 
    }
    while(y2)
    {
        ll mn = min(y2,z1) ; 
        y2-=mn ; 
        z2-=mn ; 
        ans+=(mn*2) ; 
        mn = min(y2,y1) ; 
        y2-=mn ; 
        y1-=mn ; 
        mn = min(y2,x1) ; 
        y2-=mn ; 
        x1-=mn ; 
    }
    while(x2)
    {
        ll mn = min(x2,y1) ; 
        x2-=mn ; 
        y1-=mn ; 
        mn = min(x2,x1) ;
        x2-=mn ; 
        x1-=mn ; 
        mn = min(x2,z1) ; 
        x2-=mn ; 
        z1-=mn ; 
    }
    cout << ans << '\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}