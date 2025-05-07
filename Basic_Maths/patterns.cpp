#include <bits/stdc++.h>
using namespace std;

void pattern1(int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << " * ";
    }
    cout << endl;
  }
}

void pattern2(int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern3(int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void pattern4(int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << i + 1 << " ";
    }
    cout << endl;
  }
}

void pattern5(int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; i + j < columns; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern6(int rows, int columns) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; i + j < columns; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

void pattern7(int rows) {
  int columns = 2 * rows - 1;
  for (int i = 0; i < rows; i++) {
    for (int j = i; j < (columns - 1) / 2; j++)
      cout << " ";
    for (int j = 0; j < i * 2 + 1; j++)
      cout << "*";
    for (int j = i; j < (columns - 1) / 2; j++)
      cout << " ";
    cout << endl;
  }
}
void pattern8(int rows) {
  int columns = 2 * rows - 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < i; j++)
      cout << " ";
    for (int j = 0; j < (columns - 2 * i); j++)
      cout << "*";
    for (int j = 0; j < i; j++)
      cout << " ";
    cout << endl;
  }
}

void pattern9(int rows) {
  rows = rows / 2;
  int columns = 2 * rows - 1;
  for (int i = 0; i < rows; i++) {
    for (int j = i; j < (columns - 1) / 2; j++)
      cout << " ";
    for (int j = 0; j < i * 2 + 1; j++)
      cout << "*";
    for (int j = i; j < (columns - 1) / 2; j++)
      cout << " ";
    cout << endl;
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < i; j++)
      cout << " ";
    for (int j = 0; j < (columns - 2 * i); j++)
      cout << "*";
    for (int j = 0; j < i; j++)
      cout << " ";
    cout << endl;
  }
}

void pattern10(int columns) {
  for (int i = 0; i < columns * 2 - 1; i++) {
    if (i < columns) {
      for (int j = 0; j <= i; j++)
        cout << "*";
      cout << endl;
    } else {
      for (int j = 0; j < columns * 2 - 1 - i; j++)
        cout << "*";
      cout << endl;
    }
  }
}
void pattern11(int rows) {
  for (int i = 0; i < rows; i++) {
    if (i % 2 == 0)
      for (int j = 0; j <= i; j++) {
        if (j % 2 == 0)
          cout << "1";
        else
          cout << "0";
        cout << " ";
      }
    else
      for (int j = 0; j <= i; j++) {
        if (j % 2 == 0)
          cout << "0";
        else
          cout << "1";
        cout << " ";
      }
    cout << endl;
  }
}

void pattern12(int rows) {
    int spaces = 2*rows -2;
    for (int i = 1; i <= rows; i++) {
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int k = 0;k<spaces;k++){
            cout << " " ;
        }
        for(int j=i;j>0;j--){
            cout << j;
        }
        cout << endl;
        spaces-=2;
    }
}

void pattern13(int rows) {
    int x = 1;
    for (int i = 1; i <= rows; i++) {
        for(int j=1;j<=i;j++){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}

void pattern14(int rows){
    for(int i=0; i<rows;i++){
        char ch = 'A';
        for(int j=0;j<=i;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void pattern15(int rows){
    for(int i=rows; i>0;i--){
        char ch = 'A';
        for(int j=i;j>0;j--){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void pattern16(int rows){
    char ch = 'A';
    for(int i=0; i<rows;i++){
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}
void pattern17(int rows){
    int spaces = rows-1;
    char ch = 'A';
    for(int i =1;i<=rows;i++){
      //print spaces
      for(int j =1; j<=spaces; j++){
          cout << " ";
      }
      //print letters to be reversed after middle letter
      char c2 = 'A';
      for(int k=1;k<i;k++){
          cout << c2;
          c2++;
      }
      //print middle element 
      cout << ch;
      //print the reversed pattern
      char c3 = c2-1;
      for(int k=i;k>1;k--){
        cout << c3;
        c3--;
      }

      ch+=1;
      spaces-=1;
      cout << endl;
    }
}

void pattern18(int rows){
  for(int i= 1;i<=rows;i++){
    char ch = 'A' + rows-i;
    for(int j=1;j<=i;j++){
      cout << ch;
      ch++;
    }
    cout << endl;
  }
}

void pattern19(int rows){
  for(int i=0;i<rows/2;i++){
    for(int j=rows/2;j>i;j--){
      cout << "*";
    }
    for(int j=0;j<i*2;j++){
      cout << " ";
    }
    for(int j=rows/2;j>i;j--){
      cout << "*";
    }
    cout << endl;
  }
  for(int i=0;i<rows/2;i++){
    for(int j=0;j<=i;j++){
      cout << "*";
    }
    for(int j=0;j<rows-2*(i+1);j++){
      cout << " ";
    }
    for(int j=0;j<=i;j++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern20(int rows){
    for(int i=0;i<rows;i++){

  }
}
void pattern21(int rows){
  for(int i=0;i<rows;i++){
    cout << "*";
    for(int j=0;j<rows-2;j++){
      if(i==0 || i==rows-1){
        cout << "*";
      }
      else
        cout << " ";
    }
    cout << "*";
    cout << endl;
  }
}

int main() {
  // int r,c;
  // cout << "Enter rows and columns" << endl;
  // cin >> r >> c;
  // pattern6(r,c);
  int r;
  cout << "Enter number of rows: " << endl;
  cin >> r;
  pattern21(r);
}
