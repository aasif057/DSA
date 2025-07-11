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
        i++;
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
    bool result = brute_force(arr,n,k);
    cout << result;
}