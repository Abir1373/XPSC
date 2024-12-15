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

void solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll c = 0;
    for (ll i = l1; i <= r1; i++) {
        // Binary search to find the largest power of k <= r2/i
        ll low = 0, high = 63; // Assuming k <= 2^63
        while (low <= high) {
            ll mid = (low + high) / 2;
            ll power = pow(k, mid);
            if (power * i <= r2) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Check if any power in the range [l2, r2]
        for (ll j = 0; j < low; j++) {
            ll power = pow(k, j) * i;
            if (power >= l2 && power <= r2) {
                c++;
                break;
            }
        }
    }

    cout << c << endl;
}

int main()
{
   FastRead;
   tc()
    solve();
}