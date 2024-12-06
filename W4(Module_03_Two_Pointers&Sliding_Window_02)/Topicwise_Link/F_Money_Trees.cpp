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
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n),h(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>h[i];
    }
    vector<ll>vis(n,0);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(!vis[i])
        {
            ll st=i;
            ll en=i;
            while(en+1<n && h[en]%h[en+1]==0)en++;
            for(ll j=st;j<=en;j++)vis[j]=1;
            ll val=a[st];
            ll tail=st+1,start=st;
            while(start<=en)
            {
                if(val<=k)
                {
                    ans=max(ans,tail-start);
                    if(tail>en)break;
                    val+=a[tail++];
                }
                else
                {
                    val-=a[start++];
                }
            }
        }
    }
    cout(ans);
}

int main()
{
   FastRead;
   tc()
    solve();
}