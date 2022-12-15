#include<iostream>
using namespace std;

class Node{
  public:
    int value;
    Node *next;

    Node(int value) {
      this->value = value;
      this->next = NULL;
    }
};

Node* reverse(int k, Node *head){
  if(!head->next){
    return NULL;
  }
  int i=0;
  Node *nextnode, *prevnode, *temp;
  temp = head;
  nextnode = prevnode = NULL;
  while(i<k){
    nextnode = temp->next;
    temp = prevnode;
    prevnode = temp;
    temp = nextnode;
    i++;
  }
  prevnode->next = reverse(k, prevnode->next);
}

int main(){

  Node *head = new Node(0), *temp;
  temp=head;

  int num, i=0;
  cout << "Enter the number of entries => ";
  cin >> num;
  
  while(i<num){
    int val;
    cout << "Enter the value of the node => ";
    cin >> val;
    Node *newnode = new Node(val);
    temp->next = newnode;
    temp = newnode;
    i++;
  }

  return 0;
}