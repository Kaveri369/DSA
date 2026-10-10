    
#include<bits/stdc++.h>
using namespace std;

    string longestPalindrome(string s) {
        if (s.empty()) return "";

        string LPS = string(1, s[0]);
        int n = s.size(), low, high;

        for (int i = 1; i < n; i++) {
            // Odd length palindrome
            low = i;
            high = i;
            while (low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            string palindrom = s.substr(low + 1, high - low - 1);
            if (palindrom.size() > LPS.size()) {
                LPS = palindrom;
            }

            // Even length palindrome
            low = i - 1;
            high = i;
            while (low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            palindrom = s.substr(low + 1, high - low - 1);
            if (palindrom.size() > LPS.size()) {
                LPS = palindrom;
            }
        }

        return LPS;
    }