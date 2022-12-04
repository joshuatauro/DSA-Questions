#include<iostream>
using namespace std;

class Node{
  public:
    Node *next;
    int value;

    Node(int value){
      this->value = value;
      this->next = NULL;
    }
};

int middleOfLL(Node *head){
  Node *slow, *fast;
  slow = fast = head;
  if(fast->next){
    fast = fast->next;
  }
  while(fast->next){
    slow = slow->next;
    fast=fast->next;
    if(fast->next){
      fast = fast->next;
    }
  }
  return slow->value;
}

void printLL(Node *head){
  Node *temp=head;
  while(temp){
    cout << temp->value << " ";
    temp = temp->next;
  }
}

int main() {

  Node *head = new Node(0), *temp = head;

  int num;
  cout << "Enter the number of entries => ";
  cin >> num;

  for(int i=0;i<num;i++) {
    int val;
    cout << "Enter the value of the node => ";
    cin >> val;
    Node *newnode = new Node(val);
    temp->next = newnode;
    temp=newnode;
  }
  // printLL(head);
  cout << middleOfLL(head);

  return 0;
}