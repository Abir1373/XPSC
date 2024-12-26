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
#define fr(n) for(ll i=1;i<=n;i++)
#define rfr(n) for(ll i=n;i>=1;i--) 
#define in(n) ll n ; cin>>n ;
#define inf INT_MAX ;
#define cast(val) val ? cout("YES") : cout("NO") ;
#define clr(x,y) memset(x,y,sizeof x)

void solve()
{
    ll n ; string s ; 
    cin >> n >> s ; 
    ll mx = n+1 ; 
    for(ll i=0;i<26;i++)
    {
        ll l=0 , r=n-1 , c=0 ; 
        while(l<=r)
        {
            if(s[l]==s[r])
            {
                l++ ; r-- ; 
            }
            else if(s[l]==char('a'+i))
            {
                c++ ; l++;
            }
            else if(s[r]==char('a'+i))
            {
                c++ ; r-- ; 
            }
            else
            {
                c = n+1 ; 
                break ; 
            }
        }
        mx = min(c,mx) ; 
    }
    if(mx==n+1)mx=-1;
    cout(mx) ; 
}

int main()
{
   FastRead;
   tc()
    solve();
}