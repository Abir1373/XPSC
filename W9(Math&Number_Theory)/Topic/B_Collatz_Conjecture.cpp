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
    ll x , y , k ;
    cin >> x >> y >> k ; 
    while(k>0 && x!=1)
    {
        ll ost = (x/y+1)*y-x ; 
        ost = max(1ll , ost) ; 
        ost = min(ost , k) ; 
        x+=ost ; 
        while(x%y==0)x/=y ; 
        k-=ost ; 
    } 
    cout<<x+k%(y-1)<<'\n';
   
}

int main()
{
   FastRead;
   tc()
    solve();
}