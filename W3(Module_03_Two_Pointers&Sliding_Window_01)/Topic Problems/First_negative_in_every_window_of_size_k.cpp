//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

   
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& a, int k) {
          int n = a.size() , i=0 , j=0 ;
          vector<int>ans ; 
          deque<pair<int,int>>dq ; 
          while(j<n){
              if(a[j]<0)dq.push_back({a[j],j}) ; 
              if(j-i+1==k){
                  if(!dq.empty())
                  {
                      pair<int,int>pr = dq.front() ; 
                      ans.push_back(pr.first) ; 
                      if(pr.second==i) {
                            dq.pop_front() ; 
                      }
                  }
                  else {
                      ans.push_back(0) ;
                  }
                  
                  i++ ; 
              }
              j++ ; 
          }
          return ans ; 
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends