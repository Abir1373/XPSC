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
   ll n ; 
   cin >> n ;
   vector<ll>v(n+1);
   ll p=0,sum=0;
   for(ll i=1;i<=n;i++)cin>>v[i];
   for(ll i=1;i<=n;i++)
   {
      if(p==0)
      {
         if(v[i])
         {
            if(i!=n)sum+=v[i];
            p++;
         }
      }
      else
      {
         if(v[i])
         {
            if(i!=n)sum+=v[i];
         }
         else
         {
            if(i!=n)sum++;
         }
      }
   }
   cout << sum << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}