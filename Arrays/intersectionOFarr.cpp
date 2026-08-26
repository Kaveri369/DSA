#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> findArrayIntersection( vector<int> &A,int n,vector<int> &B, int m){
    int i=0;
    int j =0;
    vector<int> ans;
    while( i<n && j<m){
        if(A[i]< B[j]){
            i++;
        }
        else if( B[j] <A[i]){
            j++;
        }
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int n ,m;
    cin>> n;
    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    cin>>m;
    vector<int> B(m);
    for(int i=0; i<m; i++){
        cin >> B[i];
    }
    vector<int> ans= findArrayIntersection(A,n, B, m);
    for(int i=0;i< ans.size(); i++){
        cout << ans[i]<<" ";
    }
return 0;
}
