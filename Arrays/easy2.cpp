// Second smallest and second largest 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min = 9999;
    int max = -9999;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
    int second_min = 9999;
    int second_max = -9999;
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]> second_max){
            second_max = arr[i];
        }
        if(arr[i]>min && arr[i]<second_min){
            second_min=arr[i];
        }
    }
    cout << "Second Largest Number: ";
    if(max!=second_max){
        cout << second_max;
    }
    else
        cout << "-1";
    cout << endl;
    cout << "Second Smallest Number: ";
    if(min!=second_min){
        cout << second_min;
    }
    else
        cout << "-1";
    cout << endl;
}