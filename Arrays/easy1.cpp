//Find the largest element in an array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -9999;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>max)
            max = arr[i];
    }

    cout << "Max Element: " << max;
    
}