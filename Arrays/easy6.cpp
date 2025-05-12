//Left Rotating an array by k place
#include<bits/stdc++.h>
using namespace std;
void lr_k_brute(int arr[], int n, int k){
    k = k%n;
    int arr1[k];
    for(int i=0;i<k;i++){
        arr1[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    int j=0;
    for(int i=n-k;i<n;i++){
        arr[i]=arr1[j];
        j++;
    }
}
void lr_k_optimal(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    // lr_k_brute(arr,n,k);
    lr_k_optimal(arr,n,k);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}