#include <iostream>
#include <stack>
using namespace std;
int main(){

stack<int> s;

s.push(10);
s.push(20);
s.push(30);

//display
cout<<"Stack Elements : ";
stack<int> temp;
temp = s;

while(!temp.empty()){
cout<<temp.top()<<" "; 
temp.pop();
}
cout<<endl;

//peek
cout<<"Top element of the stack: "<< s.top()<<endl;


//pop()
cout<<s.top()<<" is popped from the stack"<<endl;
s.pop();

//display
cout<<"Stack Elements after pop : ";
temp=s;

while(!temp.empty()){
cout<<temp.top()<<" "; 
temp.pop();
}
cout<<endl;
}
