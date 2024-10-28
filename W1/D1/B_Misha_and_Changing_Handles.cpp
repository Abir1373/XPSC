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
#define ps pair<string,string>

bool cmp(ps a,ps b)
{
    return a.s<=b.s ; 
}

void solve()
{
    ll n ; 
    cin>>n ; 
    map<string,string>mp1,mp2 ; 
    while(n--)
    {
        string a , b ;
        cin >> a >> b ; 
        if(!mp2.count(a))
        {
            mp1[a]=b; 
            mp2[b]=a;
        }
        else 
        {
            string ans = mp2[a] ;
            mp1[ans] = b ;  
            mp2[b] = ans ;
        }
    }
    ll len = sz(mp1) ; 
    cout<<len<<'\n' ; 
    vector<ps>ans;
    for(auto i: mp1)
    {
        ans.pb({i.f,i.s});
    }
    sort(ans.begin(),ans.end(),cmp) ; 
    for(auto i: ans)
    {
        cout << i.f << ' ' << i.s << '\n';
    }
}

int main()
{
   FastRead;
//    tc()
    solve();
}