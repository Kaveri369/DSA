#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<vector<int>> triplets(int n, vector<int> &num){
    set<vector<int>> st;
    for(int i =0; i< n; i++){
        for(int j = i+1; j<n; j++){
            for(int k =j+1; k< n; k++){
                if(num[i] + num[j]+ num[k]==0){
                    // to make sure set store all the unique elements
                    vector<int> temp ={ num[i], num[j],num[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
            
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}