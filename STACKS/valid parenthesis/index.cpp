#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
  stack<char> p;
  int length = s.length();
  for(int i=0;i<length;i++) {
    if(s[i] == '[' || s[i] == '{' || s[i] == '('){
      p.push(s[i]);
    }
    else{
      
      if(s[i] == '}'){
        if(p.top() == '{'){
          p.pop();
        } else {
          return false;
        }
      }else if(s[i] == ']'){
        if(p.top() == '['){
          p.pop();
        } else{
          return false;
        }
      }else if(s[i] == ')'){
        if(p.top() == '('){
          p.pop();
        } else{
          return false;
        }
      }
    }
  }
  if(p.empty()){
    return true;
  }else{
    return false;
  }
}

int main() {
  
  string s;
  cout << "Enter a string whose parenthesis is supposed to be checked => ";
  cin >> s;
  if(isValid(s)){
    cout << "The entered string is valid!";
  }else{
    cout << "The entered string is not valid";
  }
}
