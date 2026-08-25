#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE
// vector<int>moveZeros(int n, vector<int>a){
//     // step 1
//     vector<int> temp;
//     for(int i=0;i<n; i++){
//         if(a[i] !=0){
//             temp.push_back(a[i]);
//         }
//     }
//     // step 2:-
//     int nz=temp.size();
//     for(int i=0;i<nz;i++){
//         a[i]=temp[i];
//     }
//     return 0;
// }

// OPTIMAL SOLUTION:
vector<int>moveZeros(int n, vector<int>a){
    int j= -1;
    for(int i=j+1; i<n; i++){
        if(a[i]==0){
            j= i;
            break;
        }
    }
    // no non zero numbers    //
    if (j== -1) return a;
    for(int i=j+1; i<n;i++){
        if(a[i]!=0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;  
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    arr= moveZeros(n, arr);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}
