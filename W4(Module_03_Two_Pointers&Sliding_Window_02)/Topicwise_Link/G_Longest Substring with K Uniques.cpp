//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        string a = s ; 
        int r = 0 , l = 0 , ans = -1 ;
        int n = s.size() ; 
        map<char,int>mp ; 
        while(r<n)
        {
            mp[a[r]]++ ; 
            if(mp.size()==k)
            {
                ans = max(ans,r-l+1) ; 
            }
            while(mp.size()>k)
            {
                mp[a[l]]-- ; 
                if(mp[a[l]]==0)
                {
                    mp.erase(a[l]) ; 
                }
                l++;
                ans = max(ans,r-l+1) ; 
            }
            r++ ; 
        }
        return ans ; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends