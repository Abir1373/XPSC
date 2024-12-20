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

class Node{
    public:
    ll x,y,z ; 
    Node(ll x,ll y,ll z)
    {
        this->x = x ; 
        this->y = y ; 
        this->z = z ; 
    }
};

bool cmp(Node A,Node B)
{
    return A.z>B.z ; 
}

void solve()
{
    ll n ; cin >> n ; 
    vll a(n) , b(n) , d(n) ; 
    vector<Node>v ; 
    for(ll i=0;i<n;i++)
    {
        cin>>a[i] ; 
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i] ;
        d[i] = b[i] - a[i] ; 
        v.pb(Node(a[i],b[i],d[i])) ;  
    }
    sort(v.begin(),v.end(),cmp) ;
    ll left=0 , right = n-1 , ans = 0 ; 
    while(left<right)
    {
        ll tot = v[left].z + v[right].z ; 
        if(tot>=0)
        {
            right--;
            ans++ ; 
            left++ ;
        }
        else
        {
            right-- ; 
        }
    }
    cout << ans << '\n' ;
}

int main()
{
   FastRead;
   tc()
    solve();
}