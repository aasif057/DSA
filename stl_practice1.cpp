#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector<int> v = {1,2,3,4,5};
    // for(auto it:v){
    //     cout << it;
    //     cout << endl;
    // }
    // vector<int>::reverse_iterator it = v.rbegin();
    
    // for(vector<int>::reverse_iterator it= v.rbegin();it!=v.rend();it++){
    //     cout << *it;
    //     cout << endl;
    // }
    // for(auto it= v.rbegin(); it!=v.rend();it++){
    //     cout << *it;
    //     cout << endl;
    // }
    /*stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    while(st.empty()==false){
      cout << st.top() << endl;
      st.pop();
    } */
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    //cout << q1.front() << endl;
    //cout << q1.back() << endl;
    //q1.pop();
    //cout << q1.front() << endl;
    //cout << q1.back() << endl;
    while(q1.empty()==false){
      cout << "Front: " << q1.front() << endl;
      cout << "Back: " << q1.back() << endl;
      q1.pop();
  }  
  return 1;
}
