#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int size){
    for(int i=size-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // selection_sort(arr,n);
    bubble_sort(arr,n);    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}