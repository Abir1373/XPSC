//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt)
    {
        vector<int>v(26,0),ans(26,0) ; 
        int n = txt.size() ; 
        int m = pat.size() ; 
        for(int i=0;i<m;i++)
        {
            v[pat[i]-'a']++ ; 
        }
        int cnt = 0 , j = 0 ; 
        for(int i=0;i<n;i++)
        {
            ans[txt[i]-'a']++ ; 
            if(i-j+1>=m)
            {
                int fl=1 ; 
                for(int k=0;k<26;k++)
                {
                    if(ans[k]!=v[k])
                    {
                        fl=0 ;
                        break ; 
                    }
                }
                cnt+=fl ; 
                ans[txt[j]-'a']--;
                j++;
            }    
            
        }
        return cnt ; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends