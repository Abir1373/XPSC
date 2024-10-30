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
    string s ; 
    cin >> s ; 
    ll len = sz(s) ;
    stack<ll>upper,lower;
    set<ll>ans;
    ll cnt1=0 , cnt2=0 ; 
    for(ll i=0;i<len;i++)
    {
        if(s[i]!='b' && s[i]!='B')
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                upper.push(i);
                cnt1++;
            }
            if(s[i]>='a' && s[i]<='z')
            {
                lower.push(i);
                cnt2++;
            }
        }
        else 
        {
            if(s[i]=='b' && cnt2)
            {
                cnt2--;
                ll val = lower.top() ; 
                ans.insert(val);
                lower.pop();
            }
            else if(s[i]=='B' && cnt1)
            {
                cnt1--;
                ll val = upper.top() ; 
                ans.insert(val);
                upper.pop();
            }
        }
    }
    for(ll i=0;i<len;i++)
    {
        if(ans.count(i) || s[i]=='b' || s[i]=='B')continue;
        cout<<s[i];
    }
    cout<<'\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}