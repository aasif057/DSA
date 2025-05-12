//Move all zeros to the end of the array
#include<bits/stdc++.h>
using namespace std;

void move_zeros(int arr[], int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            temp.push_back(arr[i]);
    }
    int j=0;
    for(auto it: temp){
        arr[j]=it;
        j++;
    }
    for(int i=j;i<n;i++){
        arr[i]=0;
    }
}
void move_zero_optimal(int arr[], int n){
    int j =-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
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
    move_zero_optimal(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}