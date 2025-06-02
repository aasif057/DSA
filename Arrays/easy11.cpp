// Find missing number
#include<bits/stdc++.h>
using namespace std;
int find_missing_brute(int arr[], int n){
    for(int i=1;i<=n;i++){
        int flag =0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
}

int find_missing_sum(int arr[], int n){
    int sum = (n*(n+1))/2;
    int arr_sum = 0;
    for(int i=0;i<n-1;i++){
        arr_sum+=arr[i];
    }
    return sum-arr_sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int missing = find_missing_sum(arr,n);
    cout << missing << endl;
}