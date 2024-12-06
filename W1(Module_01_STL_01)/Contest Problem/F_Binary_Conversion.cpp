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
    ll n , m ; 
    cin>>n>>m ; 
    string a , b ; 
    cin >> a >> b ;
    ll tot=0 , c0=0, c1=0 ,one=0,zero=0; 
    for(ll i=0;i<n;i++)
    {
        if(b[i]=='1')one++;
        else zero++;
        if(a[i]!=b[i])
        {
            tot++;
            if(b[i]=='0')c0++;
            else c1++;
        }
    }
    if(tot%2 || (c0!=c1) )
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        tot/=2;
        if(tot>m)
        {
            cout<<"NO"<<'\n';
        }
        else if(tot==m)
        {
            cout<<"YES"<<'\n';
        }
        else if(tot<m)
        {
            if(one==1 && zero==1)
            {
                ll dif = m-tot ; 
                if(dif&1)
                {
                    cout<<"NO"<<"\n";
                }
                else cout<<"YES"<<'\n';
            }
            else cout<<"YES"<<'\n';
        }
    }
   
}

int main()
{
   FastRead;
   tc()
    solve();
}