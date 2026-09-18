#include<iostream>
using namespace std;

class Stack{
    private:
    int* arr;
    int capacity;
    int top;
    public:
    Stack(int size){
        arr = new int[capacity];
        top=-1;
      
    }

    //push
    void push(int value){
        if(top == capacity-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=value;
        }
    }

    //pop
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            cout<<arr[top]<<" is poped out of STACK"<<endl;
            top--;
        }
    }

    //peek
    void peek(){
      if(top == -1){
        cout<<"Stack is Empty";
      }
      else{
        cout<<arr[top]<<" Is the Peek Element of Stack"<<endl;
      }
    }

    //display
    void display(){
        if(top == -1){
            cout<<" Stack is Empty";
        }
        else{
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    bool empty(){
        return top == -1;
    }

    ~Stack(){
        delete[] arr;
    }
};

int main(){
   Stack s(3);

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
