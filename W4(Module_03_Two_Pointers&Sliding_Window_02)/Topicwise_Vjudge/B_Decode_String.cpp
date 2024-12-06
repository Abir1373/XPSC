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
    map<int,char>mp ;
    char cur = 'a' ;  
    for(int i=1;i<=26;i++)
    {
        mp[i]= cur ; 
        cur++ ; 
    }
    int n ; 
    cin>>n ; 
    string a , ans = ""; 
    cin >> a ; 
    rev(a) ; 
    for(int i=0;i<n;i++)
    {
        if(a[i]!='0')
        {
            int val = a[i]-48 ; 
            ans+=mp[val] ; 
        }
        else 
        {
            char x = a[i+1] ;
            char y = a[i+2] ; 
            string now = "";
            now+=y;
            now+=x; 
            int val = stoi(now) ; 
            i+=2;
            ans+=mp[val] ; 
        }
    }
    rev(ans) ; 
    cout << ans << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}