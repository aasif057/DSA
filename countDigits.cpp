#include <iostream>
using namespace std;

int main(){
  int x;
  cout << "Enter a Number: ";
  cin >> x;
  int c=0;
  while(x>=1){
    c++;
    x/=10; 
  }
  cout << "count of digits in the given number: " << c << endl;
}
