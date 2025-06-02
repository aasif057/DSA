//Count 1 in the array
#include<bits/stdc++.h>
using namespace std;

int max_cons_one_optimal(int arr[], int n){
    int max=0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count+=1;
            if(count>max){
                max= count;
            }
        }
        else{
            count =0;
        }

    }
    return max;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max_count = max_cons_one_optimal(arr, n);
    cout << max_count << endl;
}