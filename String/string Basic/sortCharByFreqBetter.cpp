#include <bits/stdc++.h>
using namespace std;

// Method 1: Using Vector + Sorting
string betterVector(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    vector<pair<char, int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });

    string result = "";
    for (const auto& p : vec) {
        char ch = p.first;
        int f = p.second;
        result += string(f, ch);
    }

    return result;
}


// Method 2: Using Priority Queue (Max-Heap)
string betterPQ(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    // Max-heap ordered by frequency (pair.first)
    priority_queue<pair<int, char>> pq;
    for (const auto& it : freq) {
        pq.push({it.second, it.first});
    }

    string result = "";
    while (!pq.empty()) {
        pair<int, char> top = pq.top();
        pq.pop();
        int count = top.first;
        char ch = top.second;
        result += string(count, ch);
    }

    return result;
}

string frequencySort(string s) {
    return betterVector(s);
    // return betterPQ(s);
}