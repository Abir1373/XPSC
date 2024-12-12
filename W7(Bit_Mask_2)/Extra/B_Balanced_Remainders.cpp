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
    ll n ; cin >> n ; 
    vll v(n) ; 
    ll zero = 0 , one = 0 , two = 0 ; 
    for(ll i=0;i<n;i++)
    {
        cin>>v[i] ; 
        ll rem = v[i]%3 ; 
        if(rem==0)zero++ ; 
        if(rem==1)one++ ;
        if(rem==2)two++ ; 
    }
    ll zero_extra = 0 , one_extra = 0 , two_extra = 0 ; 
    ll d = n/3 ; 
    if(zero>d)zero_extra = zero - d ; 
    if(one>d)one_extra = one - d ; 
    if(two>d)two_extra = two - d ; 
    
    // main code 

    ll ans = 0 ; 

    if(zero<d)
    {
        if(two_extra)
        {
            ll dif = d - zero ; 
            ll mn = min(dif,two_extra) ; 
            two_extra-=mn ; 
            zero+=mn; 
            ans+=mn ; 
        }
        if(zero<d)
        {
            ll dif = d - zero ; 
            ll mn = min(dif,one_extra) ; 
            one_extra-=mn ; 
            zero+=mn ; 
            ans+=(mn*2) ; 
        }
    }

    if(one<d)
    {
        if(zero_extra)
        {
            ll dif = d - one ; 
            ll mn = min(dif,zero_extra) ; 
            zero_extra-=mn ; 
            one+=mn; 
            ans+=mn ; 
        }
        if(one<d)
        {
            ll dif = d - one ; 
            ll mn = min(dif,two_extra) ; 
            two_extra-=mn ; 
            one+=mn ; 
            ans+=(mn*2) ; 
        }   
    }
    if(two<d)
    {
        if(one_extra)
        {
            ll dif = d - two ; 
            ll mn = min(dif,one_extra) ; 
            one_extra-=mn ; 
            two+=mn; 
            ans+=mn ; 
        }
        if(two<d)
        {
            ll dif = d - two ; 
            ll mn = min(dif,zero_extra) ; 
            zero_extra-=mn ; 
            two+=mn ; 
            ans+=(mn*2) ; 
        }   
    }
    cout << ans << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}