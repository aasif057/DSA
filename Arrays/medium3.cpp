// Sort  an array consisting of 0, 1 and 2's only

#include<bits/stdc++.h>
using namespace std;
void brute(int arr[], int n){
    sort(arr, arr+n);
}

void better(int arr[], int n){
    int a,b,c=0;
    for(int i = 0; i < n; i++) {
        if(arr[i]==0)
            a++;
        else if(arr[i]==1)
            b++;
        else
            c++;
    }
    for(int i = 0; i < a; i++) {
        arr[i]=0;
    }
    for(int j = 0; j < b; j++) {
        arr[j]=1;
    }
    for(int k = 0; k < n; k++) {
        arr[k]=2;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    brute(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}