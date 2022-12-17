#include<iostream>
#include<stack>
using namespace std;


bool isRedundant(stack<char>&stack, string s){
  for(int i=0;i<s.size();i++){
    if(s[i] == '('){
      int j=i;

    } else {
      stack.push(s[i]);
    }
  }
}

int main() {
  string s;
  cout << "Enter the expression which is to be checked => ";
  cin >> s;
  stack<char>stack;
  if(isRedundant(stack, s)){
    cout << "False";
  }
  return 0;
}