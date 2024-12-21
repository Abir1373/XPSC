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
    vector<string>v(n) ; 
    map<char,ll>one ;
    map<char,ll>two ; 
    map<string,ll>mp ; 
    for(ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
        one[v[i][0]]++ ; 
        two[v[i][1]]++ ; 
        mp[v[i]]++ ; 
    }
    ll ans = 0 ;
    for(ll i=0;i<n;i++)
    {
        ll c1 = max(one[v[i][0]]-mp[v[i]],0ll) ;
        ll c2 = max(two[v[i][1]]-mp[v[i]],0ll) ; 
        ans+=(c1+c2) ; 
        if(one[v[i][0]]>0)one[v[i][0]]--;
        if(two[v[i][1]]>0)two[v[i][1]]--;
        if(mp[v[i]]>0)mp[v[i]]--;
    }
    cout << ans << '\n' ;

}

int main()
{
   FastRead;
   tc()
    solve();
}