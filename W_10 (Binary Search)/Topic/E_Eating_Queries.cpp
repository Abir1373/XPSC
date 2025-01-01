#include <bits/stdc++.h>
 
using namespace std ;
 
void run()
{
   #ifndef Abir
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif
} 
 
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
#define sz(s) s.size() 
#define FastRead ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define fr(n) for(ll i=1;i<=n;i++)
#define rfr(n) for(ll i=n;i>=1;i--) 
#define in(qq)  ll qq; cin>>qq ;
#define in2(pp,qq) ll pp,qq ; cin>>pp>>qq ; 
#define str(ss) string ss ; cin>>ss ;


void solve()
{
   in2(n,q) ;
   vector<ll>v(n) ;
   for(ll i=0;i<n;i++){
      cin>>v[i] ;
   }
   rall(v) ;
   for(ll i=1;i<n;i++)v[i]+=v[i-1] ;
   while(q--){
      in(var) ;
      ll l=0,r=n-1 ;
      if(v[r]<var)cout(-1) ;
      else
      {
         while(l<=r){
            ll m = (l+r)>>1 ;
            if(v[m]==var){
               l = m ; r = m ; break ;
            }
            if(v[m]<var)l=m+1 ;
            else r=m-1 ;
         }
         cout(max(l,r)+1);
      }
   }
}   
   
   
int main()
{
   FastRead;
   //run();
   tc()
    solve();
}