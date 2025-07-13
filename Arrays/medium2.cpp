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


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    Result r = brute_force(arr,n,k);
    cout << '[' <<r.value1 << ",  " << r.value2 << ']' << endl; 
}