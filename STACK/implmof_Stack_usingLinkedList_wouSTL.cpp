#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     Node(int value){
        data=value;
        next=NULL;
     }
};

class Stack{
    private:
    Node* top;
    public:
      Stack(){
        top=NULL;
    }

//Push
void push(int value){
Node* newNode = new Node(value);
newNode->next=top;
top = newNode;
cout<< value <<" Added to Stack"<<endl;
}
//Pop
void pop(){
    if(top==NULL){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        Node* temp= top;
        top=top->next;
        delete temp;
    }
}
//PEEk
void peek(){
if(top==NULL){
    cout<<"Stack is EMPTY! "<<endl;
}
else{
    cout<<top->data<<" Is the PEEK ELEMENT OF STACK"<<endl;
}
}
//Display

void display(){
  if(top==NULL){
    cout<<"Stack is EMPTY "<<endl;
  }
  else{
    cout<<"Stack Contains these Elements : ";
    Node* temp =top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  }
  cout<<endl;


}

};

int main(){
 Stack s;

 s.push(10);
 s.push(20);
 s.push(30);
 s.peek();
 s.display();
 s.pop();
 s.peek();
 s.display();

 return 0;
}