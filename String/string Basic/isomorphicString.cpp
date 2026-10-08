#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
// if the lenght of two strings is not same then it is not isomorphic.
    if (s.length() != t.length()) {
        return false;
    }

    // Create a hashmap to store character mappings
    unordered_map<char, char> charMappingMap;
// for loop to  iterate over each char of first loop
    for (int i = 0; i < s.length(); i++) {
// replacement ex b-->k
        char original = s[i];
        char replacement = t[i];

        if (charMappingMap.find(original) == charMappingMap.end()) {

            // Check if replacement is already mapped
            bool valueExists = false;

            for (auto &pair : charMappingMap) {
                if (pair.second == replacement) {
                    valueExists = true;
                    break;
                }
            }

            if (!valueExists) {
                charMappingMap[original] = replacement;
            }
            else {
                return false;
            }
        }
        else {

            char mappedCharacter = charMappingMap[original];

            if (mappedCharacter != replacement) {
                return false;
            }
        }
    }

    return true;
}