#include<iostream>
#include<stack>
using namespace std;


void main() {
  stack<char> s;
  string str, revstr;
  cout << "Enter the string => ";
  cin >> str;

  for(int i=0;i<str.length();i++){
    s.push(str[i]);
  }
  for(int i=0;i<str.length();i++){
    char c = s.top();
    revstr.push_back(c);
    s.pop();
  }
  cout << "reversed string is -> " << revstr;
} 