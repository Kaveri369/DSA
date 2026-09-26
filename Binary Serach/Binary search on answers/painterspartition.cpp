#include <bits/stdc++.h>
using namespace std;

    int countPainters(vector<int>& boards, int time) {
        int painters = 1;
        long long boardSum = 0;

        for (int i = 0; i < boards.size(); i++) {
            if (boardSum + boards[i] <= time) {
                boardSum += boards[i];
            }
            else {
                painters++;
                boardSum = boards[i];
            }
        }

        return painters;
    }

    int minTime(vector<int>& boards, int k) {
        int n = boards.size();

        if (k > n)
            return -1;

        int low = *max_element(boards.begin(), boards.end());
        int high = accumulate(boards.begin(), boards.end(), 0);

        while (low <= high) {
            int mid = (low + high) / 2;

            int painters = countPainters(boards, mid);

            if (painters > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return low;
    }
