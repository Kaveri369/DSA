#include<bits/stdc++.h>
using namespace std;

    int myAtoi(string& s) {
        // code here
        int i = 0;
        // Skip leading whitespaces
        while (s[i] == ' ') {
            i++;
        }

        int sign = 1;
        // Check for optional sign
        if (s[i] == '+' || s[i] == '-') {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        long result = 0;
        // Process digits and calculate the result
        while (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');

            // Check for overflow and underflow
            if (result * sign > INT_MAX) {
                return INT_MAX;
            }
            if (result * sign < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return (result * sign);
    }
