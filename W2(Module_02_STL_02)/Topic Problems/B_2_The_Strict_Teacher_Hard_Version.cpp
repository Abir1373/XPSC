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
#define vll vector<ll>

void solve()
{
    ll n , teacher , student ; 
    cin >> n >> teacher >> student ; 
    vll v(teacher) ; 
    for(ll i=0;i<teacher;i++){
        cin>>v[i] ; 
    }
    all(v) ; 
    while(student--)
    {
        ll val ; 
        cin >> val ; 
        auto it = lower_bound(v.begin(),v.end(),val) ; 
        if(it==v.begin())
        {
            cout << v[0]-1 << '\n' ; 
        }
        else if(it==v.end()){
            cout << n - v[teacher-1] << '\n' ; 
        }
        else 
        {
            ll ans = *it - *(it-1) ; 
            ans/=2 ; 
            cout << ans << '\n' ; 
        }
    }
}

int main()
{
   FastRead;
   tc()
    solve();
}