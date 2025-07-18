// Majority Element, return the element which appears more than n/2 times in the array

#include<bits/stdc++.h>
using namespace std;

int brute(int arr[], int n){
    int thresh = floor(n/2);
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j]==arr[i])
                count++;            
        }
        if(count>thresh){
            return arr[i];
        }
    }
    return -1;
}
int better(int arr[], int n){
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2)
            return it.first;
    }
    return -1;
}
int optimal(int arr[], int n){
    int ele, count = 0;
    for(int i = 0; i < n; i++) {
        if(count==0){
            count=1;
            ele=arr[i];
        }
        else if(arr[i]==ele){
            count++;
        }
        else{
            count--;
        }
    }
    int cnt=0;
    for(int i = 0; i < n; i++) {
        if(arr[i]==ele) cnt++;
    }
    if(cnt>n/2) return ele;
    else    return -1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int res = optimal(arr,n);
    cout << res << endl;
}