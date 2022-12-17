#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>&s, int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
    s.push(num);
    return;
  }
  
  int top=s.top();
  s.pop();
  insertSorted(s,num);
  s.push(top);
}

void solve(stack<int>&s){
  if(s.empty()){
    return;
  }
  int top=s.top();
  s.pop();
  solve(s);
  insertSorted(s,top);
}

void display(stack<int> s){
  for(int i=0;!s.empty();i++){
    cout << s.top() << " ";
    s.pop();
  }
}

int main() {
  stack<int>s;
  int num;
  cout << "Enter the number of entries => ";
  cin >> num;
  for(int i=0;i<num;i++) {
    int value;
      cout << "Enter the value to push => ";
      cin >> value;
      s.push(value);
  }
  cout << "Before sorting: " << endl;
  display(s);
  cout << endl << "After sorting: " << endl;
  solve(s);
  display(s);
  return 0;
}