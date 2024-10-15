#include <bits/stdc++.h>
using namespace std;
int reverseN(int n){
    int x = 0;
    while(n>0){
        int a = n%10;
        x = x*10+a;
        n/=10;
    }
    return x;
}
int main(){
    cout << "Enter a number to check: " << endl;
    int a;
    cin >> a;
    int b = reverseN(a);
    
    if(a==b)
        cout << a << " is palindrome" << endl;
    else
        cout << a << " is not palindrome" << endl;
}