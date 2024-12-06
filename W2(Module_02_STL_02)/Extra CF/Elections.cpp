// Bismillahir Rahmanir Raheem

// Valent Caprico -> Abir 

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

class Node
{
    public:
    ll voteA , voteB , dif ; 
    Node(ll voteA,ll voteB, ll dif)
    {
        this->voteA = voteA ; 
        this->voteB = voteB ; 
        this->dif = dif ; 
    }
};

bool cmp(Node A, Node B)
{
    return A.dif<B.dif ; 
}

void solve()
{
    ll n , x ; 
    cin >> n >> x ; 
    vll a(n),b(n); 
    for(ll i=0;i<n;i++)
    {
        cin>>a[i] ; 
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i] ; 
    }
    vector<Node>v ; 
    ll cntA=0,cntB=0 ; 
    for(ll i=0;i<n;i++)
    {
        ll dif = a[i]-b[i] ; 
        if(dif==0)
        {
            v.pb(Node(a[i],b[i],abs(dif)+1)) ; 
        }
        else if(dif<0)
        {
            cntB++;
            v.pb(Node(a[i],b[i],abs(dif)+1)) ; 
        }
        else cntA++;
    }
    sort(v.begin(),v.end(),cmp) ;  
    
    for(ll i=0;i<v.size();i++)
    {
        ll d = v[i].dif ; 
        if(x>=d)
        {
            x-=d ; 
            cntA++;
            if(d>1)cntB--;
        }
        else break;
    }
    cout << (cntA>n/2?"YES":"NO") << '\n';
}

int main()
{
   FastRead;
   tc()
    solve();
}