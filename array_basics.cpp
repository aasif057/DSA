#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1-D Array
    int arr[5];
    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    cout << "The given array is: " << endl;
    for(int j=0; j<5; j++){
        cout << arr[j] << endl;
    }
    return 0;
}