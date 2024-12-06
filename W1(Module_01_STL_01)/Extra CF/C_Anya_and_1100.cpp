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
#define pi pair<ll,ll>
void solve()
{
    string a ; 
    cin >> a ;
    ll n = sz(a) ; 
    a = ' ' + a ; 
    vector<ll>v(n+5,0) ; 
    ll cnt = 0 ; 
    for(ll i=1;i<=n-3;i++)
    {
        if(a[i]=='1')
        {
            if(a[i+1]=='1' && a[i+2]=='0' && a[i+3]=='0')
            {
                v[i+3]++ ; 
                cnt++ ; 
            }
        }
    }
    ll que ; 
    cin >> que ; 
    while(que--)
    {
        ll index ;
        char ch ;  
        cin >> index >> ch ; 
        if(n<4)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        if(a[index]==ch)
        {
            cout<<(cnt?"YES":"NO")<<'\n';
        }
        else 
        {
            if (index >= 4 && a[index-3] == '1' && a[index-2] == '1' && a[index-1] == '0' && a[index] == '0') {
                v[index]--;
                cnt--;
            }
            if (index >= 3 && index+1 <= n && a[index-2] == '1' && a[index-1] == '1' && a[index] == '0' && a[index+1] == '0') {
                v[index+1]--;
                cnt--;
            }
            if (index >= 2 && index+2 <= n && a[index-1] == '1' && a[index] == '1' && a[index+1] == '0' && a[index+2] == '0') {
                v[index+2]--;
                cnt--;
            }
            if (index+3 <= n && a[index] == '1' && a[index+1] == '1' && a[index+2] == '0' && a[index+3] == '0') {
                v[index+3]--;
                cnt--;
            }
            a[index] = ch;
            if (index >= 4 && a[index-3] == '1' && a[index-2] == '1' && a[index-1] == '0' && a[index] == '0') {
                v[index]++;
                cnt++;
            }
            if (index >= 3 && index+1 <= n && a[index-2] == '1' && a[index-1] == '1' && a[index] == '0' && a[index+1] == '0') {
                v[index+1]++;
                cnt++;
            }
            if (index >= 2 && index+2 <= n && a[index-1] == '1' && a[index] == '1' && a[index+1] == '0' && a[index+2] == '0') {
                v[index+2]++;
                cnt++;
            }
            if (index+3 <= n && a[index] == '1' && a[index+1] == '1' && a[index+2] == '0' && a[index+3] == '0') {
                v[index+3]++;
                cnt++;
            }
            cout << (cnt ? "YES" : "NO") << '\n';

        }
    }
   
}

int main()
{
   FastRead;
   tc()
    solve();
}