#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> alternateNumbers(vector<int>&a){
    // defining two data structure
    vector<int> pos, neg;
    // this will give you the size of the array
    int n= a.size();
    for( int i =0; i<n; i++){
        // this will make sure that +ve store in pos and -ve store in the neg.
        if(a[i] >0){
            pos.push_back(a[i]);

        }
        else {
            neg.push_back(a[i]);
        }
    }
    if (pos.size() > neg.size()){
        for (int i=0; i<neg.size(); i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index =neg.size()*2;
        for( int i =neg.size(); i<pos.size(); i++){
            a[index] =pos[i];
            index++;
        }
    }
    else{
       for (int i=0; i<pos.size(); i++){
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }
        int index =pos.size()*2;
        for( int i =pos.size(); i<neg.size(); i++){
            a[index] =neg[i];
            index++;
        }
    }
    return a;
}
