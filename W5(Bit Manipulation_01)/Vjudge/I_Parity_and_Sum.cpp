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
    ll n ; 
    cin>>n ; 
    vll evn, odd ; 
    for(ll i=0,p;i<n;i++)
    {
        cin>>p ;
        if(p&1)
        {
            odd.pb(p) ; 
        }
        else {
            evn.pb(p) ; 
        }
    }
    ll len1 = sz(odd) ; 
    ll len2 = sz(evn) ; 
    if(len1==0 || len2==0) {
        cout << 0 << '\n' ; 
    }
    else{
        all(odd) ; 
        all(evn) ; 
        ll mx = odd[len1-1] ; 
        if(mx>evn[len2-1])
        {
            cout << len2 << '\n' ; 
        }
        else 
        {
            ll p = 0 ; 
            for(ll i=0;i<len2;i++)
            {
                if(mx>evn[i])
                {
                    mx+=evn[i] ; 
                }
                else {
                    p = 1 ; 
                    break ; 
                }
            }
            if(p) {
                cout << len2+1 << '\n' ; 
            }
            else {
                cout << len2 << '\n' ;
            }
        }
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}