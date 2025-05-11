//Removing duplicates from a sorted array
#include<bits/stdc++.h>
using namespace std;

int remove_dup_brute(int arr[], int n){
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it: st){
        arr[index]=it;
        index++;
    }
    return index;
}

int remove_dup_optimal(int arr[], int n){
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int size = remove_dup_optimal(arr, n);
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}