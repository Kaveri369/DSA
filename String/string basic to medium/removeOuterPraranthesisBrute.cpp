#include<bits/stdc++.h>
using namespace std;

    string removeOuter(string& s) {
        // code here
        string ans = "";
        stack<char> st;
        for (char ch : s) {
            if (ch == ')') st.pop();
            if (!st.empty()) ans += ch;
            if (ch == '(') st.push(ch);
        }
        return ans;
    }
