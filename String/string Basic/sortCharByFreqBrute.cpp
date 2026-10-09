#include <bits/stdc++.h>
using namespace std;

string bruteForce(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    string result = "";
    while (!freq.empty()) {
        char maxChar;
        int maxFreq = 0;

        for (auto& it : freq) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                maxChar = it.first;
            }
        }

        result += string(maxFreq, maxChar);
        freq.erase(maxChar);
    }

    return result;
}
string frequencySort(string s) {
    return bruteForce(s);
    
}