//Find the number which appears once and others twice

#include<bits/stdc++.h>
using namespace std;

int find_cons_brute(int arr[], int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    }
    return -1;
}

int find_cons_better(int arr[], int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int hash[max+1] = {0};
    for(int i=1;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==1){
            return i; 
        }
    }
    return -1;
}

int find_cons_better2(int arr[], int n){
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;
}

int find_cons_optimal(int arr[], int n){
    int xorr =0;
    for(int i=0;i<n;i++){
        xorr = xorr^arr[i];
    }
    return xorr;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count = find_cons_optimal(arr,n);
    cout << count << endl;
}