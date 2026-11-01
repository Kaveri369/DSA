#include<bits/stdc++.h>
using namespace std;

    void solve(int open, int close, string op, vector<string>& v, int n) {

        // Base condition
        if (open == 0 && close == 0) {
            v.push_back(op);
            return;
        }

        // If opening brackets are available
        if (open != 0) {
            string op1 = op;
            op1.push_back('(');

            solve(open - 1, close, op1, v, n);
        }

        // If closing brackets are available
        if (close > open) {
            string op2 = op;
            op2.push_back(')');

            solve(open, close - 1, op2, v, n);
        }
    }

    vector<string> generateParenthesis(int n) {

        vector<string> v;
        string op = "";

        solve(n, n, op, v, n);

        return v;
    }

