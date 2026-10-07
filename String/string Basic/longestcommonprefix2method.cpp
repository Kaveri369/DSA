#include <bits/stdc++.h>
using namespace std;
// horrizontal scanning
int getCommonCountMatchCharacters(const string& s1, const string& s2) {
        if (s1.length() == 0 || s2.length() == 0) {
            return 0;
        }

        if (s1.length() > s2.length()) {
            return getCommonCountMatchCharacters(s2, s1);
        }

        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                return count;
            }
            count++;
        }

        return count;
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        if (strs.size() == 1) {
            return strs[0];
        }

        int minCount = INT_MAX;
        string first = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int count = getCommonCountMatchCharacters(first, strs[i]);
            minCount = min(minCount, count);
        }

        return first.substr(0, minCount);
    }



    // vertical scanning
        string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
// pick up each char from the first array
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i];
// compare it with the other char in other array
            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].length() || c != strs[j][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
    }