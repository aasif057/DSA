// 2 sum problem variant 2, return the indexes of both the elements
#include<bits/stdc++.h>
using namespace std;
struct Result{
    int value1;
    int value2;
};

Result brute_force(int arr[], int n, int k){ 
    Result r;
    r.value1=-1;
    r.value2= -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            else{
                if(arr[i]+arr[j]==k){
                    r.value1=i;
                    r.value2=j;
                    return r;
                }
            }
        }
    }
    return r;
}

Result optimal(int arr[], int n, int k){
    Result r;
    r.value1=-1;
    r.value2=-1;
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]=i;
    }
    sort(arr, arr+n);
    int i=0, j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        // cout << 'd' << sum << endl;
        if(sum<k){
            i++;
        }
        else if(sum>k){
            j--;
        }
        else{
            r.value1=mpp[arr[i]];
            r.value2=mpp[arr[j]];
            return r;
        }
    }
    return r;
}

Result better(int arr[], int n, int k){
    map<int, int> mpp;
    Result r;
    r.value1=-1;
    r.value2=-1;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int diff=k-a;
        if(mpp.find(diff)!=mpp.end()){
            r.value1=i;
            r.value2=mpp[diff];
            return r;
        }
        mpp[a]=i;
    }
    return r;
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
    Result r = optimal(arr,n,k);
    cout << '[' <<r.value1 << ",  " << r.value2 << ']' << endl; 
}