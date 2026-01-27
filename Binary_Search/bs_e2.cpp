#include<bits/stdc++.h>
using namespace std;

int lowerbound_Brute(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]>=target)  return i;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int x = lowerbound_Brute(arr,n,target);
    cout << x << endl;
}