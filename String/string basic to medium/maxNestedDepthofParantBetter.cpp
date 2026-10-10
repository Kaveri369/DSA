#include<bits/stdc++.h>
using namespace std;

    int maxDepth(string s) {
        int ans=0,n=0;
        stack<char>st;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                st.push(ch);
            }
            else if(ch==')') st.pop();
            n=st.size();
            ans=ans<n?n:ans;
            // ans = max(ans, n);
        }
        return ans;
    }
