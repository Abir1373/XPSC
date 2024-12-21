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
    ll n ;
    cin>>n ; 
    string s ; 
    cin>>s ;
    s = ' '+s ;
    ll a=0,b=0,c=0,d=0;
    for(ll i=1;i<=n;i++)
    {
        if(s[i]=='N')a++;
        else if(s[i]=='S')b++;
        else if(s[i]=='E')c++;
        else if(s[i]=='W')d++;
    }
    ll a1,b1,c1,d1;
    if(a%2==b%2)
    {
        a1=a/2;
        b1=b/2;
    }
    else 
    {
        cout("NO");
        return;
    }
    if(c%2==d%2)
    {
        c1=c-c/2;
        d1=d-d/2;
    }
    else
    {
        cout("NO");
        return;
    }
    if (a1 + b1 + c1 + d1 == 0 || a1 + b1 + c1 + d1 == n)
    {
        cout << "NO\n";
        return;
    }
    for(ll i=1;i<=n;i++)
    {
        if(s[i]=='N')
        {
            if(a1>0)
            {
                a1--;
                cout<<"R";
            }
            else cout<<"H";
        }
        else if(s[i]=='S')
        {
            if(b1>0)
            {
                b1--;
                cout<<"R";
            }
            else cout<<"H";
        }
        else if(s[i]=='E')
        {
            if(c1>0)
            {
                c1--;
                cout<<"R";
            }
            else cout<<"H";
        }
        else if(s[i]=='W')
        {
            if(d1>0)
            {
                d1--;
                cout<<"R";
            }
            else cout<<"H";
        }
        
    }
    cout<<endl;
}

int main()
{
   FastRead;
   tc()
    solve();
}