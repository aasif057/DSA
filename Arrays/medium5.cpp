// Max subarray sum - Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

int brute(int arr[], int n){
    int max_sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum=0;
            for(int k = i; k < j; k++) {
                sum+=arr[k]; 
            }
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

int better(int arr[], int n){
    int max_sum=0;
    for(int i = 0; i < n; i++) {
        int sum=0;
        for(int j = i; j < n; j++) {
            sum+=arr[j];
            max_sum=max(max_sum,sum);
        }
    }
    return max_sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = better(arr, n);
    cout << res << endl;

}