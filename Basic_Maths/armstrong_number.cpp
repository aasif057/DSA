#include<bits/stdc++.h>
using namespace std;
int count_digits(int a){
    int count = 0;
    while(a>0){
        a /= 10;
        count+=1;
    }
    return count;
}
bool check_armstrong(int n){
    int dig_count = count_digits(n);
    int num = n;
    int sum = 0;
    int rem;
    while(n>0){
        rem = n%10;
        sum += pow(rem, dig_count);
        n /= 10;
    }
    if(num==sum)
        return true;
    return false;
}
int main(){
    int n;
    cout << "Enter the number to check: " << endl;
    cin >> n;
    if(check_armstrong(n))
        cout << "Yes " << n << " is a armstrong number." << endl;
    else
        cout << "No" << endl;
}