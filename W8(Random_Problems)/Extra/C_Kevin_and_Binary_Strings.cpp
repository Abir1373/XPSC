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
#define nl '\n'
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
    string s ; cin >> s ; 
    ll n = sz(s) ; 
    ll pos = 0 ; 
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')pos++;
        else break ;
    }
    if(pos==n)
    {
        cout << "1 1 " << 1 << " " << n << '\n' ;
        return ;
    }
    string cmp = s ; 
    ll ans = -1 ;
    ll  len = n-pos ;
    for(ll i=0;i<pos;i++)
    {
        string cur = s ; 
        for(ll j=0;j<len;j++)
        {
            if(i+j>=n)break;
            ll x = s[n-len+j] - '0' ; 
            ll y = s[i+j]-'0' ; 
            cur[n-len+j] = '0' + (x^y) ; 
        }
        if(cur>cmp)
        {
            cmp = cur ; 
            ans = i ; 
        }
    }
    cout << 1 << " " << n << " " << ans+1 << " " << ans+len << '\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}