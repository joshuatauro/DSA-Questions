#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s, int value){
  if(s.empty()) {
    s.push(value);
  }
  int top = s.top();
  s.pop();
  insertAtBottom(s,value);
  s.push(top);
}

void reverse(stack<int>&s){
  if(s.empty()){
    return;
  }
  int top = s.top();
  s.pop();
  reverse(s);
  insertAtBottom(s, top);
}

void display(stack<int> s){
  int size = s.size();
  for(int i=0;i<size;i++){
    cout << s.top() << endl;
    s.pop();
  }
}

int main() {
  stack<int> s;
  int num;
  cout << "Enter the number of entries into the stack => ";
  cin >> num;
  for(int i=0;i<num;i++) {
    int value;
    cout << "Enter the value to be pushed into the stack => ";
    cin >> value;
    s.push(value);
  }
  display(s);
  reverse(s);
  display(s);
  return 0;
}
