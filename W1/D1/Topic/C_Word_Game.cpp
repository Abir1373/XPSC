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
    ll n ; 
    cin>>n ; 
    string a[4][n+1] ; 
    set<string>one,two,three;
    for(ll i=1;i<=3;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin >> a[i][j] ;  
            if(i==1)
            {
                one.insert(a[i][j]);
            }
            else if(i==2)
            {
                two.insert(a[i][j]);
            }
            else if(i==3)
            {
                three.insert(a[i][j]);
            }
        }
    } 
    ll c1=0 , c2=0 , c3=0 ;   
    for(ll i=1;i<=n;i++)
    {
        string x,y,z  ; 
        x = a[1ll][i] ; 
        y = a[2ll][i] ;
        z = a[3ll][i] ;
        if(!two.count(x) || !three.count(x))
        {
            if(!two.count(x) && !three.count(x))
            {
                c1+=3;
            }   
            else c1++;
        }
        if(!one.count(y) || !three.count(y))
        {
            if(!one.count(y) && !three.count(y))
            {
                c2+=3;
            }   
            else c2++;
        }
        if(!two.count(z) || !one.count(z))
        {
            if(!one.count(z) && !two.count(z))
            {
                c3+=3;
            }   
            else c3++;
        }
    }
    cout << c1 << ' ' << c2 << ' ' << c3 << '\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}