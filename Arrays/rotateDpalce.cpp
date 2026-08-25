#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate(int arr[],int n, int d){
    d = d%n;
    int temp[d];
    // take a temp
    for(int i=0;i<d; i++){
        temp[i]= arr[i];
    }
    // Shifting
    for(int i=d; i<n;i++){
        arr[i-d]=arr[i];
    }
    // put back temp in an array
    for(int i=n-d; i<n; i++){
        arr[i]= temp[i-(n-d)];
    }
}
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
