#include <bits/stdc++.h>
using namespace std;
bool divisibility(int a, int b){
    if(a%b==0)
        return true;
    else
        return false;
}

int main(){
    int n;
    cout << "Enter number; " << endl;
    cin >> n;
    cout << "Divisors are: " << endl;
    for(int i=1; i<=n;i++){
        if(divisibility(n, i))
            cout << i << endl;
    }
}