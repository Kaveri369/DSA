#include<bits/stdc++.h>
using namespace std;

    int maxDepth(string s) {
        int ans = 0, depth = 0;
        for (auto ch : s) {
            if (ch == '(') depth++;
            else if (ch == ')') depth--;
            ans = ans < depth ? depth : ans;
        }
        return ans;
    }