// Bismillahir Rahmanir Raheem

// Valent Caprico -> Abir 

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


void solve()
{
    vector<ll>v(2000,0) ; 
    for(ll i=2;i<=1000;i+=7)v[i]=1;
    for(ll i=2;i<=1000;i++)
    {
        if(v[i])v[i]=v[i-1]+v[i] ; 
        else v[i] = v[i-1] ; 
    }
    ll n ; 
    cin >> n ; 
    cout<<v[n]<<'\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}