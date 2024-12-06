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

void solve()
{
    ll n ; 
    cin >> n ; 
    string ss ; 
    cin >> ss ; 
    set<char>st ; 
    for(auto i: ss)st.insert(i);
    string ans = "";
    for(auto i: st)ans+=i;
    // cout<<ans<<'\n';
    ll len = sz(ans) ; 
    ll lo=0 , hi = len-1 ;
    set<char>a,b ; 
    map<char,char>mp ;  
    while(lo<=hi)
    {
        mp[ans[lo]] = ans[hi] ; 
        mp[ans[hi]] = ans[lo] ; 
        lo++;
        hi--;
    }
    for(ll i=0;i<n;i++)cout<<mp[ss[i]] ; 
    cout<<'\n';
}
int main()
{
   FastRead;
   tc()
    solve();
}