// Intersection of two arrays

#include<bits/stdc++.h>
using namespace std;

vector<int> find_intersection_b(int a[], int b[], int n, int m){
    vector<int> intersectionArr;
    int arr[m] ={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j] && arr[j]==0){
                intersectionArr.push_back(a[i]);
                arr[j]=1;
                break;
            }
            if(b[j]>a[i]){
                break;
            }
        }
    }
    return intersectionArr;
}

vector<int> find_intersection_o(int a[], int b[], int n, int m){
    vector<int> intersecArr;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            intersecArr.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
    }
    return intersecArr;
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

    vector<int> intersection = find_intersection_o(arr1, arr2, n1, n2);

    for(auto it: intersection){
        cout << it << " ";
    }

}   