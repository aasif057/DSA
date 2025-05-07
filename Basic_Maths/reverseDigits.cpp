#include<iostream>

using namespace std;
void reverseN(int a){
  while(a>=1){
    int x;
    x = a%10;
    a/=10;
    cout << x;
  }
  cout << endl;
}
int main(){
  cout << "Enter a number to reverse: ";
  int n;
  cin >> n;
  cout << "Reversed Number is : ";
  reverseN(n);
}

