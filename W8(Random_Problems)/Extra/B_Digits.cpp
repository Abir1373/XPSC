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
    ll n , div ; cin >> n >> div ; 
    cout << "1 " ; 
    if(n>=3 || div%3==0)
    {
        cout << "3 " ;
    }
    if(div==5)
    {
        cout<<"5 ";
    }
    if(n>=3 ||div==7)
    {
        cout<<"7 ";
    }
    if(n>=6 || div==9 || (div==3 || div==6) && n>=3)
    {
        cout << "9" ;
    }
    cout<<'\n';
}

signed main()
{
   FastRead;
   tc()
    solve();
}