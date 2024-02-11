//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int> ans(n);
        set<int> st;
        ans[0] = 0;
        st.insert(0);
        for(int i=1;i<n;i++){
            int val = ans[i-1] - i;
            if(val < 0 || (st.find(val) != st.end())) val = ans[i-1] + i;
            ans[i] = val;
            st.insert(val);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends