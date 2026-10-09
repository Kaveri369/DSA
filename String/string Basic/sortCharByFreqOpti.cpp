#include <bits/stdc++.h>
using namespace std;

string optimal(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    vector<vector<char>> bucket(s.size() + 1);
    for (const auto& it : freq) {
        char ch = it.first;
        int f = it.second;
        bucket[f].push_back(ch);
    }

    string result = "";
    for (int i = s.size(); i >= 1; --i) {
        for (char ch : bucket[i]) {
            result += string(i, ch);
        }
    }

    return result;
}