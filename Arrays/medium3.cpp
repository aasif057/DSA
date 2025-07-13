// Sort  an array consisting of 0, 1 and 2's only

#include<bits/stdc++.h>
using namespace std;
void brute(int arr[], int n){
    sort(arr, arr+n);
}

void better(int arr[], int n){
    int a=0,b=0,c=0;
    for(int i = 0; i < n; i++) {
        if(arr[i]==0)
            a++;
        else if(arr[i]==1)
            b++;
        else
            c++;
    }
    // cout << "a: " << a << "b: " << b << "c: " << c << endl;
    for(int i = 0; i < a; i++) {
        arr[i]=0;
    }
    for(int j = a; j < a+b; j++) {
        arr[j]=1;
    }
    for(int k = a+b; k < n; k++) {
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
    better(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}