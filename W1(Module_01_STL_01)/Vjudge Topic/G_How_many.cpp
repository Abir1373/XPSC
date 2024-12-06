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

class Node
{
    public:
    ll a , b , c ; 
    Node(ll a,ll b,ll c)
    {
        this->a = a ; 
        this->b = b ; 
        this->c = c ; 
    }
};

void solve()
{
    ll sum , t ; 
    cin >> sum >> t ; 
    vector<Node>v;
    for(ll i=0;i<=sum;i++)
    {
        for(ll j=0;j<=sum;j++)
        {
            for(ll k=0;k<=sum;k++)
            {
                if(i+j+k>sum)continue;
                v.pb(Node(i,j,k)) ; 
            }
        }
    }
    ll cnt=0 ; 
    for(auto i: v)
    {
        if(i.a*i.b*i.c<=t)cnt++;
    }
    cout<<cnt<<'\n' ;
}

int main()
{
   FastRead;
//    tc()
    solve();
}