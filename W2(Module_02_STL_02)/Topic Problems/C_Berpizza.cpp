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

class cmp
{
    public:
    bool operator()(pii a,pii b)
    {
        if(a.s!=b.s)return a.s<b.s ; 
        else return a.f>b.f ; 
    }
};

void solve()
{
    ll que ; 
    cin >> que ; 
    set<ll>st ; 
    queue<pii>q ; 
    priority_queue<pii,vector<pii>,cmp>pq ; 
    ll ind = 0 ; 
    while(que--)
    {
        ll type ; 
        cin >> type ; 
        if(type==1)
        {
            ind++ ; 
            ll val ; 
            cin >> val ; 
            q.push({ind,val}) ; 
            pq.push({ind,val}) ; 
        }
        else if(type==2)
        {
            while(st.count(q.front().f))q.pop() ; 
            pii customer = q.front() ; 
            cout << customer.f << ' ';
            st.insert(customer.f) ;  
        }
        else 
        {
            while(st.count(pq.top().f))pq.pop() ; 
            pii customer = pq.top() ; 
            cout << customer.f << ' ' ;
            st.insert(customer.f) ;  
        }
    }
}

int main()
{
   FastRead;
//    tc()
    solve();
}