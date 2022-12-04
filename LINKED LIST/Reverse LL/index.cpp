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

void printLL(Node *head){
  Node *temp=head;
  while(temp){
    cout << temp->value << " ";
    temp = temp->next;
  }
}

void reverseLL(Node *&head){
  Node *nextNode, *currentNode, *prevNode;
  currentNode = head;
  prevNode = NULL;
  while(currentNode){
    nextNode = currentNode->next;
    currentNode->next = prevNode;
    prevNode = currentNode;
    currentNode = nextNode;
  }
  head = prevNode;
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

  printLL(head);
  reverseLL(head);
  printLL(head);
  return 0;
}