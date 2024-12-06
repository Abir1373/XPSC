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
    ll n , q ; 
    cin >> n >> q ; 
    string s ;
    cin >> s ; 
    s = " " + s ; 
    ll ans = 0 ; 
    for(ll i=1;i<=n-2;i++)
    {
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
        {
            ans++ ; 
        }
    }
    while(q--)
    {
        ll p ; char ch ; 
        cin >> p >> ch ; 
        char check = s[p] ; 
        if(check=='a')
        {
            if(p+2<=n && s[p+1]=='b' && s[p+2]=='c')
            {
                ans-- ; 
            }
        }
        else if(check=='b')
        {
            if((p+1<=n && p-1>=1) && s[p+1]=='c' && s[p-1]=='a')
            {
                ans-- ; 
            }
        }
        else 
        {
            if(p-2>=1 && s[p-1]=='b' && s[p-2]=='a')
            {
                ans-- ;
            }
        }
        s[p] = ch ; 
        if(ch=='a')
        {
            if(p+2<=n && s[p+1]=='b' && s[p+2]=='c')
            {
                ans++ ; 
            }
        }
        else if(ch=='b')
        {
            if((p+1<=n && p-1>=1) && s[p+1]=='c' && s[p-1]=='a')
            {
                ans++ ; 
            }
        }
        else 
        {
            if(p-2>=1 && s[p-1]=='b' && s[p-2]=='a')
            {
                ans++ ;
            }
        }
        cout << ans << '\n' ;
    }
}

int main()
{
   FastRead;
//    tc()
    solve();
}