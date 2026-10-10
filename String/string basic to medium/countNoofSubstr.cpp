#include <bits/stdc++.h>
using namespace std;

long long countSubstringsM1(string s) {
    int n = s.length();
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            ans++;
        }
    }
    return ans;
}

// if we want to print the all substrings
// for(int i=0;i<n;i++)
//     {
//         string temp="";
//         for(int j=i;j<n;j++)
//         {
//             temp+=s[j];
//             cout<<temp<<" ";
//             ans++;
//         }
//         cout<<endl;
//     }
//     return ans;


// method 2
//  we can say taht ans can be the sum of n natural numbers
//  ex: string lengt 5 therefore addtion of natural n o.s upto that length
long long countSubstringsM2(string s) {
    long long n = s.length();
    return (n * (n + 1)) / 2;
}
