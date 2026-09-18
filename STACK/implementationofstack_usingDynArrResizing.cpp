#include <iostream>
using namespace std;
//DynamicARRA
class Stack{
   private:
   int* arr;
   int capacity;
   int top;
   public:
   top=-1;
   arr = new int[capacity];

  //push
   void push(){
    if(top == capacity -1){
   //double the capacity
      int newcapacity = capacity * 2;
   //create new array
     int* newarray = new int[newcapacity];
   //update
 for(int i=0;i<=top;i++){
   newarray[0] = arr[0];
 }      
   //delete
  delete[] arr;

    //point array to new array
 arr = newarr; 

    //Update Capacity

 capacity=newcapacity;
    }
   top++;
   arr[top]=value;
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

 
 