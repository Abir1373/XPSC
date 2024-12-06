// Bismillahir Rahmanir Raheem

// author : !YELLALOT ( Abir ) 

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
    cin>>n >> k ;
    vll v(k) , dif(k) ; 
    for(ll i=0;i<k;i++)
    {
        cin>>v[i] ; 
    }
    for(ll i=0;i<k-1;i++)
    {
        dif[i] = v[i+1] - v[i] ; 
    }
    for(ll i=0;i<k-2;i++)
    {
        if(dif[i+1]<dif[i])
        {
            cout << "No" << '\n' ; 
            return ; 
        }
    } 
    if(k<2)
    {
        cout << "Yes" << '\n' ; 
        return ; 
    } 
    ll con = dif[0]*(n-k+1) ; 
    cout << ( con >= v[0] ? "Yes" : "No") << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}