#include<bits/stdc++.h>
using namespace std;

    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n; // Use long long to handle integer overflow when n = INT_MIN

        if (nn < 0) {
            nn = -1 * nn;
        }

        while (nn > 0) {
            if (nn % 2 == 1) {
                ans = ans * x;
                nn = nn - 1;
            } else {
                x = x * x;
                nn = nn / 2;
            }
        }

        if (n < 0) {
            ans = 1.0 / ans;
        }

        return ans;
    }
