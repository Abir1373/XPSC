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
    string s;
    cin>>s;
    int c0=0,c1=0;
    int n = sz(s) ; 
    for(auto it: s)
    {
        it=='0' ? c0++ : c1++;
    }
    string s2="" ;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && c1)
        {
            s2+='1';
            c1--;
        }
        else if(s[i]=='1' && c0)
        {
            s2+='0';
            c0--;
        }
        else break;
    }
    int n2=sz(s2);
    int d = n-n2;
    cout(d);
}

int main()
{
   FastRead;
   tc()
    solve();
}