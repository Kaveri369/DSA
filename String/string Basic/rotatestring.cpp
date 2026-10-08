#include <bits/stdc++.h>
using namespace std;
    
// efficient for leetcode
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        return (s + s).find(goal) != string::npos;
    }
};


// for better understanding
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        for (int i = 0; i < s.length(); i++) {
            string rotated = s.substr(i) + s.substr(0, i);

            if (rotated == goal)
                return true;
        }

        return false;
    }