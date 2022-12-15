#include<iostream>
using namespace std;

class Stack{
  public:
    int *arr;
    int top1,top2,size;

    void push1(int value){
      if(top2-top1>0){
        *(arr+top1) = value;
        top1++;
      }
    }

    void push2(int value){
      if(top2-top1>0){
        *(arr+top2)=value;
        top2--;
      }
    }

    int pop1(){
      if(top1>0){
      return *(arr+top1);
      top1--;
      }
    }

    int pop2(){
      if(top2<size){
        return *(arr+top2);
        top2++;
      }
    }

};