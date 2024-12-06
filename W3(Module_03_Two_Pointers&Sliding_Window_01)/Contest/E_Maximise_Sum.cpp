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

void solve()
{
    ll n ;
    cin >> n ; 
    deque<ll>neg,pos ; 
    ll tot=0 , zero=0 ; 
    for(ll i=0,inp;i<n;i++){
        cin >> inp ; 
        if(inp==0)zero=1;
        else if(inp<0)neg.pb(inp) ;
        else pos.pb(inp) ; 
    }
    all(pos) ;
    rall(neg) ; 
    ll len1 = sz(neg) ; 
    ll len2 = sz(pos) ; 
    if(len1%2==0 || zero==1)
    {
        for(auto i: pos)tot+=i;
        for(auto i: neg)tot+=(i*-1) ; 
    }
    else 
    {
        if(len1 && len2){
            ll a = pos.front() ; 
            ll b = neg.front()*-1 ; 
            pos.ppf();
            neg.ppf();
            ll mn = min(a,b) ; 
            ll mx = max(a,b) ; 
            tot+=mx;
            tot-=mn;
            for(auto i: pos)tot+=i ; 
            for(auto i: neg)tot+=(i*-1);
        }
        else if(len1 && len2==0)
        {
            tot+=neg.front();
            neg.ppf();
            for(auto i: neg)tot+=(i*-1);
        }
    }
    cout<<tot<<'\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}