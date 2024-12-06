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
    ll n ; 
    cin >> n ;
    vector<ll>v(n) ;
    map<ll,ll>mp ;  
    for(ll i=0;i<n;i++)
    {
        cin >> v[i] ; 
        mp[v[i]]++ ; 

    }
    priority_queue<pii>pq ; 

    for(auto i: mp)
    {
        pq.push({i.s,i.f}) ; 
    }
    ll len = sz(mp) ; 
    if(len==1)
    {
        auto [c1 , val1]  = pq.top() ; 
        cout << c1 << '\n' ; 
        return ;    
    }
    while(len>=2)
    {
        pii x = pq.top() ; 
        pq.pop() ; 
        pii y = pq.top() ; 
        pq.pop() ;
        x.f--;
        y.f--;
        if(x.f)
        {
            pq.push({x.f,x.s}) ; 
        } 
        else len--;
        if(y.f)
        {
            pq.push({y.f,y.s}) ; 
        }
        else len--;
    }
    if(len==0)
    {
        cout << 0 << '\n' ;
        return ; 
    }
    cout << pq.top().f << '\n' ; 
}

int main()
{
   FastRead;
   tc()
    solve();
}