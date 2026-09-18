#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> s;

  s.push(10);
  cout<<"10 has pushed to the stack "<<endl;
  s.push(20);
  cout<<"20 has pushed to the stack"<<endl;
  s.push(30);
  cout<<"30 has pushed to the stack"<<endl;

  //display operation
  if(s.empty()){
    cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"Stack Contains these Elements : "; 
  stack<int> temp = s;
   while(!temp.empty()){
    cout<<temp.top()<<" ";
    temp.pop();
   }
cout<<endl;
  }

//pop operation
if(s.empty()){
    cout<<"Stack Underflow"<<endl;
}
else{
    cout<<s.top()<<" is Popped from Stack"<<endl;
    s.pop();
}

//Display after pop
 if(s.empty()){
    cout<<"Stack is empty";
  }
  else{
    cout<<"Stack Contains these Elements :"; 
    stack<int> temp = s;
   while(!temp.empty()){
    cout<<temp.top()<<" ";
    temp.pop();
   }
  }

 
}
