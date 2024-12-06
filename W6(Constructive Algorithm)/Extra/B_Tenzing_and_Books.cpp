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
    cin >> n >> k ; 
    set<ll>st ; 
    for(ll i=30;i>=0;i--)
    {
        if((k>>i)&1)
        {
            st.insert(i) ; 
        }
    }
    deque<ll>a(n),b(n),c(n) ; 
    for(ll i=0;i<n;i++)cin>>a[i] ;
    for(ll i=0;i<n;i++)cin>>b[i] ;
    for(ll i=0;i<n;i++)cin>>c[i] ;

    map<ll,ll>mp ; 
    while (!a.empty())
    {
        ll x = a.front(); 
        ll ans = x ^ k;  
        bool skip = false; 
        for (ll i = 30; i >= 0; i--) 
        {
            if (((ans >> i) & 1) && ((x >> i) & 1)) 
            {
                skip = true;
                break ;
            }
        }
        if(skip)
        {
            break;
        }
        if (!skip) 
        {
            for (ll i = 30; i >= 0; i--) 
            {
                if ((x >> i) & 1) 
                {
                    mp[i]++;
                }
            }
        }
        a.pop_front(); 
    }
    while (!b.empty())
    {
        ll x = b.front(); 
        ll ans = x ^ k;  
        bool skip = false; 
        for (ll i = 30; i >= 0; i--) 
        {
            if (((ans >> i) & 1) && ((x >> i) & 1)) 
            {
                skip = true;
                break ;
            }
        }
        if(skip)
        {
            break;
        }
        if (!skip) 
        {
            for (ll i = 30; i >= 0; i--) 
            {
                if ((x >> i) & 1) 
                {
                    mp[i]++;
                }
            }
        }
        b.pop_front(); 
    }
    while (!c.empty())
    {
        ll x = c.front(); 
        ll ans = x ^ k;  
        bool skip = false; 
        for (ll i = 30; i >= 0; i--) 
        {
            if (((ans >> i) & 1) && ((x >> i) & 1)) 
            {
                skip = true;
                break ;
            }
        }
        if(skip)
        {
            break;
        }
        if (!skip) 
        {
            for (ll i = 30; i >= 0; i--) 
            {
                if ((x >> i) & 1) 
                {
                    mp[i]++;
                }
            }
        }
        c.pop_front(); 
    }

    ll len1 = st.size() ; 
    ll len2 = mp.size() ; 
    
    cout << (len1==len2 ? "Yes" : "No") << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}