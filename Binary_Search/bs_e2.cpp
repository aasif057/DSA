#include<bits/stdc++.h>
using namespace std;

int lowerbound_Brute(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]>=target)  return i;
    }
    return n;
}

int lowerBound_Optimal(int arr[], int n, int target){
    int low = 0, high = n-1, ans = n;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
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
    // int x = lowerbound_Brute(arr,n,target);
    int x = lowerBound_Optimal(arr,n,target);
    cout << x << endl;
}
