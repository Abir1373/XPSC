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
    ll n; 
    cin >> n; 
    vll v(n + 1); 
    bool non_zero = false;
    ll mn = 1e18, mx = -1;
    
    for (ll i = 1; i <= n; i++) 
    {
        cin >> v[i]; 
        if (v[i] != 0) 
        {
            non_zero = true; 
        }
        mn = min(mn, v[i]); 
        mx = max(mx, v[i]); 
    }
    if (!non_zero) 
    {
        cout << 0 << '\n' << '\n'; 
        return;
    }
    if (n == 1) 
    {
        cout << 1 << '\n' << v[1] << '\n'; 
        return;
    }

    ll cnt = 0; 
    vll ans; 

    while (mn!=mx) 
    {
        ll div = (mn + mx) >> 1; 
        for (ll i = 1; i <= n; i++) 
        {
            v[i] = abs(v[i] - div); 
        }
        sort(v.begin()+1,v.end()) ; 
        mn = v[1] ; 
        mx = v[n] ; 
        ans.push_back(div); 
        cnt++; 
        if(cnt>40)
        {
            cout<<-1<<'\n';
            return ;
        }
    }
    cnt++;
    ans.pb(mx);
    cout << cnt << '\n'; 
    for (ll i = 0; i < cnt; i++) 
    {
        cout << ans[i] << (i == cnt - 1 ? '\n' : ' '); 
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}