// Union of two arrays

#include<bits/stdc++.h>
using namespace std;
set<int> union_brute(int arr1[], int arr2[], int n1, int n2){
    set<int> set1;
    for(int i=0;i<n1;i++){
        set1.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        set1.insert(arr2[i]);
    }
    return set1;
}

vector<int> union_optimal(int arr1[], int arr2[], int n, int m){
    vector<int> Union;
    int i=0;
    int j=0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
        if (Union.size() == 0 || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
        } else // case 3
        {
        if (Union.size() == 0 || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
        }
    }
    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
        Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
        Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}
int main(){
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    // set<int> final_set = union_brute(arr1, arr2, n1,n2);
    // int final_arr[final_set.size()];
    // int i=0;
    // for(auto it: final_set){
    //     final_arr[i] = it;
    //     i++;
    // }
    // for(int i=0;i<final_set.size();i++){
    //     cout << final_arr[i] << " ";
    // }
    vector<int> final_vec = union_optimal(arr1,arr2,n1,n2);
    for(auto it: final_vec){
        cout << it << " ";
    }

}