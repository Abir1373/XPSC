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

bool cmp(pii A , pii B)
{
    if(A.f!=B.f)
    {
        return A.f>=B.f ; 
    }
    else return A.s<B.s ;
}

void solve()
{
    string a ; 
    cin >> a ; 
    map<char,ll>mp ; 
    ll x = 1 ; 
    for(char ch = 'a' ; ch<='z';ch++)
    {
        mp[ch] = x++  ;
    }
    ll n = sz(a) ; 
    ll one = mp[a[0]] ; 
    ll two = mp[a[n-1]] ; 
    ll dif = abs(one-two) ; 
    ll mn = min(one,two) ; 
    ll mx = max(one,two) ;
    vector<pii>ans ;   
    for(ll i=0;i<n;i++)
    {
        if(mp[a[i]]>=mn && mp[a[i]]<=mx)
        {
            ans.pb({mp[a[i]],i+1}) ; 
        }
    }
    if(one>=two)
    {
        sort(ans.begin(),ans.end(),cmp) ; 
    }
    else all(ans) ; 
    ll len = sz(ans) ; 
    cout << dif << ' ' << len << '\n' ; 
    for(ll i=0;i<len;i++)
    {
        cout << ans[i].s << (i==len-1?'\n':' ');
    }
    
}

int main()
{
   FastRead;
   tc()
    solve();
}