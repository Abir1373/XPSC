// Bismillahir Rahmanir Raheem

// author : VaLEnT_DouLoS ( Abir ) 

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define FastRead ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    ll firstZero = -1; // Index of the first zero in the string

    // Find the first occurrence of '0'
    for (ll i = 0; i < n; i++) {
        if (s[i] == '0') {
            firstZero = i;
            break;
        }
    }

    // Case 1: All `1`s
    if (firstZero == -1) {
        cout << "1 1 1 " << n << '\n';
        return;
    }

    // Case 2: Optimal split when a `0` is present
    ll l1 = 1, r1 = n; // Entire string as the first substring
    ll l2, r2;

    // If the first `0` is in the left half, take a substring ending before it
    if (firstZero < n / 2) {
        l2 = 1;
        r2 = firstZero + 1; // Include the first `0`
    } 
    // Otherwise, take a substring starting just after it
    else {
        l2 = firstZero + 1;
        r2 = n; // Include the remaining part of the string
    }

    cout << l1 << " " << r1 << " " << l2 << " " << r2 << '\n';
}

int main() {
    FastRead;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
