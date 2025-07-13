// 2 sum problem variant 1
#include<bits/stdc++.h>
using namespace std;

bool brute_force(int arr[], int n, int k){  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            else{
                if(arr[i]+arr[j]==k){
                    return true;    
                }
            }
        }
    }
    return false;
}

bool better_approach(int arr[], int n, int k){
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        int a = arr[i];
        int diff = k-a;
        if(mpp.find(diff)!=mpp.end()){
            return true;
        }
        mpp[a]=i;
    }
    return false;
}

bool optimal(int arr[], int n, int k){
    int i=0, j=n-1;
    sort(arr, arr+n);
    while(i<j){
        int sum = arr[i]+arr[j];
        // cout << "s: " << sum << endl;
        if(sum<k){
            i++;
        }
        else if(sum>k){
            j--;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){
    int n;  
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    bool result = optimal(arr,n,k);
    cout << result;
}