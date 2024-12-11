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
#define maxSize 32768

vll palindromes ; 

bool isPalindrome(ll inp)
{
    string s = to_string(inp) ; 
    ll len = sz(s) ;
    for(ll i=0;i<(len+1)/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            return false ;
        }
    }
    return true ;
}

void fun()
{
    for(ll i=0;i<maxSize;i++)
    {
        bool ok = isPalindrome(i) ;
        if(ok)
        {
            palindromes.pb(i) ;
        }
    }
}


void solve()
{
    ll n ;
    cin >> n ; 
    vll v(n) ; 
    map<ll,ll>have ; 
    for(ll i=0;i<n;i++)
    {
        cin >> v[i] ;
        have[v[i]]++ ;   
    }
    ll len = sz(palindromes) ; 
    ll cnt = n ; 
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<len;j++)
        {
            ll div = palindromes[j] ^ v[i] ; 
            if(have[div])
            {
                cnt+=have[div] ;
            }
        }
    }
    cout << (cnt>>1ll) << '\n';
}

int main()
{
   FastRead;
   fun();
   tc()
    solve();
}