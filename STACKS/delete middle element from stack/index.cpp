#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s, int count, int size){
  if(count == size/2){
    s.pop();
    return;
  }
  int popped = s.top();
  s.pop();
  count++;
  solve(s,count,size);
  s.push(popped);
  return;
}

void deleteMiddleElement(stack<int> &s){
  int size = s.size();
  int count=0;
  solve(s,count,size);
}


int main() {
  stack<int> s;
  int num;
  cout << "Enter the number of elements to enter into the stack => ";
  cin >> num;
  for(int i=0;i<num;i++) {
    int value;
    cout << "Enter the element to push into the stack => ";
    cin >> value;
    s.push(value);
  }
  return 0;
}
