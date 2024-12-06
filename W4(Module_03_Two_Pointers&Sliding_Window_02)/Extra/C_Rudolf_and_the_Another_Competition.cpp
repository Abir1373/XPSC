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

class Node{
    public:
    ll slv , pen , num ; 
    Node(ll slv,ll pen,ll num)
    {
        this->slv = slv ; 
        this->pen = pen ; 
        this->num = num ; 
    }
} ; 

bool cmp(Node A,Node B)
{
    if(A.slv!=B.slv)
    {
        return A.slv>B.slv ; 
    }
    else 
    {
        if(A.pen!=B.pen)
        {
            return A.pen<B.pen ; 
        }
        else {
            return A.num<B.num ; 
        }
    }
}

void solve()
{
    ll n,m,t ; 
    cin>>n>>m>>t ; 
    vector<Node>v ; 
    for(ll i=0;i<n;i++)
    {
        vector<ll>cur(m) ; 
        for(ll i=0;i<m;i++)
        {
            cin>>cur[i] ; 
        }
        all(cur) ; 
        ll cnt=0 , pen = 0 ; 
        for(ll i=0;i<m;i++)
        {
            if(i) {
                cur[i]=cur[i-1] + cur[i] ;
            }
            if(cur[i]<=t)
            {
                cnt++ ; 
                pen += cur[i] ; 
            }
        }
        v.pb(Node(cnt,pen,i+1)) ; 
    }

    sort(v.begin(),v.end(),cmp) ;  
    
    for(ll i=0;i<n;i++)
    {
        if(v[i].num==1){
            cout<<i+1<<'\n';
            return ;
        }
    }
     
}

int main()
{
   FastRead;
   tc()
    solve();
}