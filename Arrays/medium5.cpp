// Max subarray sum - Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;
int max_1(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
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

int kadane(int arr[], int n){
    long long max_sum = INT_MIN,sum=0;
    for(int i = 0; i < n; i++) {
        if(sum+arr[i]>0){
            sum+=arr[i];
            max_sum = max_1(sum, max_sum);
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
    int res = kadane(arr, n);
    cout << res << endl;

}