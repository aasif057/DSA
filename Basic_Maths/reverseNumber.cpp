#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    while(n>0){
        int a = n%10;
        x = x*10+a;
        n/=10;
    }
    cout << x << endl;
}