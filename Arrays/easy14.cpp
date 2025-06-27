// Longest subarray with sum K(only positives)

#include<bits/stdc++.h>
using namespace std;

int optimal_approach(int arr[], int n, int k){
    int right =0, left = 0, len = 0 ;
    int sum =arr[0];
    while(right < n){
        while(sum >k && left <= right){
            sum-=arr[left];
            left++; 
        }
        if(sum==k){
            len = max(len, right-left+1);   
        }
        right++;
        sum+=arr[right];    
    }
    return len;
}

int better_approach(int arr[], int n, int k){
    map<int,int> prefixSum;
    int sum=0;
    int length = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            length = max(length, i+1);
        }
        int rem = sum-k;
        if(prefixSum.find(rem)!=prefixSum.end()){
            int x = i-prefixSum[rem];
            length = max(length, x);
        }   
        prefixSum[sum]=i;   
    }   
    return length;
}
int brute_approach(int arr[], int n, int k){  //this is a better brute force approach with t.c ~=O(n^2),one more brute force approach with t.c ~= O(n^3) is to generate all the subarrays and find the sum of each array and write a condition to match it with k and replace length if it is more than the current length
    int length = 0;
    for(int i = 0;i<n;i++){
        // cout << "outer loop: " << arr[i] << endl;
        int sum = arr[i];
        // cout << "outer sum: " << sum << endl;
        if(sum==k && length<=1){
            length = 1;
        }
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            // cout << sum << " '  " << endl;
            if(sum==k && (j-i+1)>length){
                length = (j-i+1);
                // cout << "d " << length << " -d" << endl; 
                break;
            }
            else if(sum>k){
                break;
            }

        }
        // cout << "sum after inner loop: " << length << " s " << sum <<endl; 
    }
    return length;
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
    int length = optimal_approach(arr, n, k);
    cout << "length: " << length << endl;
}