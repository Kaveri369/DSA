#include<iostream>
using namespace std;
// optimal solution time complexity ofo(n)
int largestele(int arr[],int n){
    int largest=arr[0];

    for(int i=0;i<n; i++){
        if(arr[i]>largest)
        largest= arr[i];
    }
    return largest;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>> arr[i];
    }
    int ans=largestele(arr,n);
    cout<< ans;
    
}