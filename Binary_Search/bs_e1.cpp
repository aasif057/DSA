#include<bits/stdc++.h>
using namespace std;

int brute(int a[], int arrSize, int target){
    for(int i=0; i<arrSize; i++){
        if(a[i] == target)
            return i;
    }
    return -1;
}
int binary_search1(int a[], int n, int low, int high, int target){
    while(low<=high){
        int mid = (high + low)/2;
        if(a[mid]==target)  return mid;
        else if(a[mid]>target)  high = mid-1;
        else    low=mid+1;
    }
    return -1;
}

//Recursive Solution
int binary_search2(int a[], int n, int low, int high, int target){
    if(low>=high){
        return -1;
    }              //Base Case
    int mid = (low+high)/2;
    if(a[mid]==target){
        return mid;
    }
    else if(a[mid]>target){
        binary_search2(a, n, low, mid -1, target);
    }
    return binary_search2(a, n, mid+1, high, target);  
    
}
int main(){
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }
    int target;
    cin >> target;
    int low = 0, high = n-1;
    // int x = binary_search1(arr1, n, low, high, target);
    int x = binary_search2(arr1, n, low, high, target);
    if(x!=-1){
        cout << "Target found at index: " << x;
    }
    else
        cout << "Target Not Found!!";
}