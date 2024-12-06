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
    cin>>n ; 
    vector<ll>v(n+1),pre(n+1,0); 
    ll x=-1,y=-1;
    for(ll i=1;i<=n;i++)
    {
        cin >> v[i] ; 
        if(v[i]%2)
        {
            if(x==-1)
            {
                x=i;
                y=i;
            }
            else 
            {
                y=i;
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+v[i] ;  
    }
    if(pre[n]%2==0)
    {
        cout<<n<<'\n';
    }
    else 
    {
        ll lf = abs(n-x);
        ll rg = abs(1-y);
        cout<<max(lf,rg)<<"\n";
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}