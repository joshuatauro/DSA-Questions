#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s,int count,int size, int value){
  if(count == size){
    s.push(value);
    return;
  }

  int top = s.top();
  s.pop();
  count++;
  solve(s,count,size,value);
  s.push(top);
  return;
}

void display(stack<int>s){
  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }
}

int main() {
  stack<int>s;
  int value;
  cout << "Enter the number of entries => ";
  cin >> value;
  for(int i=0;i<value;i++) {
    int num;
    cout << "Enter the number to push into the stack => ";
    cin >> num;
    s.push(num);
  }
  cout << "Before insertion => " << endl;
  display(s);
  cout << endl;
  int toInsert;
  cout << "Enter the number to insert at the bottom of the stack => ";
  cin >> toInsert;
  solve(s,0,s.size(), toInsert);
  cout << "After insertion => " << endl;
  display(s);
}