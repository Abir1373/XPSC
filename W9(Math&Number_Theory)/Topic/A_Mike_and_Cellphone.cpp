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
#define cast(val) val ? cout("yes") : cout("no") ;
#define clr(x,y) memset(x,y,sizeof x)

void solve()
{
    ll a,b ; 
    cin>>a>>b;
    ll x=a*b ; 
    ll y=a*b+a;
    ll z=x+y;
    ll p=0;
    if(b==1)p++;
    if(p)cout("NO");
    else
    {
        cout("YES");
        cout<<x<<' '<<y<<' '<<z<<ed;
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}