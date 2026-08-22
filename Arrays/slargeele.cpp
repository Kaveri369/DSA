#include <iostream>
#include <climits>
#include <utility>
using namespace std;

int slargestElement(int a[], int n) {
    int largest = a[0];
    int slargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] != largest && a[i] > slargest) {
            slargest = a[i];
        }
    }

    return slargest;
}

int ssmallestElement(int a[], int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }

    return ssmallest;
}

pair<int,int> getSecondElement(int a[], int n) {

    int slargest = slargestElement(a, n);
    int ssmallest = ssmallestElement(a, n);

    return {slargest, ssmallest};
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<int,int> ans = getSecondElement(a, n);

    cout << "Second largest: " << ans.first << endl;
    cout << "Second smallest: " << ans.second << endl;

    return 0;
}

