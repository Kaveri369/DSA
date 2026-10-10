#include<bits/stdc++.h>
using namespace std;

    bool isPalindrome(string &s)
    {
        int j = s.size() - 1;
        int i = 0;

        while (i < j)
        {
            if (s[i] != s[j]) return false;

            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            string tmp = "";

            for (int j = i; j < n; j++)
            {
                tmp += s[j];

                if (isPalindrome(tmp) && tmp.size() > ans.size())
                {
                    ans = tmp;
                }
            }
        }

        return ans;
    }
