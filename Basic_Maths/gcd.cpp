#include <bits/stdc++.h>
using namespace std;
bool common_divisor(int a, int b, int c){
    if(a%c==0 && b%c==0)
        return true;
    else
        return false;
}

int main(){
    int num1, num2;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    int small = num1>num2?num2:num1;
    for(int i=small; i>=1; i--){
        if(common_divisor(num1,num2,i)){
            cout << "GCD of " << num1 << "and " << num2 << " is: " << i << endl;
            break;
        }
    }
}